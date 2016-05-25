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

void MainWindow::enviarDados()
{
  QDateTime datetime;
  QString instrucao;
  if(socket->isOpen()){
      datetime = QDateTime::currentDateTime();
      instrucao = "set "+
          datetime.toString(Qt::ISODate)+
          " "+
          QString::number((inicio + qrand())%fim)+"\r\n";

      this->ui->txtLog->append(instrucao.replace("\n\r", ""));
      socket->write(instrucao.toStdString().c_str());
      socket->waitForBytesWritten(3000);
  }
}

MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}

void MainWindow::on_btnConectar_clicked()
{
    QString ip = this->ui->txtIP->text();
    int porta = this->ui->txtPorta->text().toInt();
    socket->connectToHost(ip, porta);
    if(socket->waitForConnected(3000)){
      this->ui->txtLog->append("Conectou ao servidor");
    }
    else{
      this->ui->txtLog->append("Nâo conectou ao servidor");
    }
}

void MainWindow::timerEvent(QTimerEvent *e)
{
    enviarDados();
}

void MainWindow::on_btnConectar_2_clicked()
{
    intervalo = this->ui->sliderFaixa->value() * 1000;
    inicio = this->ui->txtInicio->text().toInt();
    fim = this->ui->txtFim->text().toInt();
    this->startTimer(intervalo);
}
