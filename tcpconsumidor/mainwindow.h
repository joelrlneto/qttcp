#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();


protected:
  void timerEvent(QTimerEvent *e);

private slots:
  void on_btnConectar_clicked();
  void on_btnConectar_2_clicked();

private:

  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int intervalo, inicio, fim;

  void enviarDados();
};

#endif // MAINWINDOW_H
