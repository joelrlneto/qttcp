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
  /**
   * @brief Tratamento do evento de clique do botão Listar clientes.
   */
  void on_btnListarClientes_clicked();
  /**
   * @brief Tratamento do evento de clique do botão Conectar.
   */
  void on_btnConectar_clicked();
  /**
   * @brief Tratamento do evento de clique do botão Desconectar.
   */
  void on_btnDesconectar_clicked();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int intervalo, idTimerAtivo;
  QVector<int> valores;
};

#endif // MAINWINDOW_H
