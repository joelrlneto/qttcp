#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
}

MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}

void MainWindow::timerEvent(QTimerEvent *e)
{
    QString cliente = this->ui->listClientes->selectedItems()[0]->text();
    QString str;
    QByteArray array;
    QStringList list;
    QString instrucao = "get " + cliente + "\r\n";
    if(socket->state()== QAbstractSocket::ConnectedState){
        socket->write(instrucao.toStdString().c_str());
        socket->waitForBytesWritten(3000);
        socket->waitForReadyRead(3000);
        valores.clear();
        while(socket->bytesAvailable()){
          str = socket->readLine().replace("\n","").replace("\r","");
          list = str.split(" ");
          if(list.size() == 2){
            str = list.at(1);
            if(valores.count() == 10)
                valores.pop_front();
            valores.push_back(list.at(1).toInt());
          }
        }
        this->ui->grafico->setValues(valores);
//        for(int i = 0; i < 10; i++){
//            qDebug() << "[" << i << "]" << valores.at(i);
//        }
    }
}

void MainWindow::on_btnListarClientes_clicked()
{
    QString instrucao = "list";
    QString ip = this->ui->txtIP->text();
    QString str;
    int porta = this->ui->txtPorta->text().toInt();
    socket->connectToHost(ip, porta);
    if(socket->waitForConnected(3000)){
        this->ui->lblStatus->setText("[Conectado ao servidor]");

        if(socket->isOpen()){
            socket->write(instrucao.toStdString().c_str());
            socket->waitForBytesWritten(3000);
            socket->waitForReadyRead(3000);
            qDebug() << "Bytes available: " << socket->bytesAvailable();
            while(socket->bytesAvailable()){
              str = socket->readLine().replace("\n","").replace("\r","");
              this->ui->listClientes->addItem(str);
            }
        }
    }
    else{
      this->ui->lblStatus->setText("[Não conectou ao servidor]");
    }    
}

void MainWindow::on_btnConectar_clicked()
{
    idTimerAtivo = this->startTimer(1000);
}

void MainWindow::on_btnDesconectar_clicked()
{
    this->killTimer(idTimerAtivo);
}
