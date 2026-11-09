#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
  // classe habilitada para tratar sinais e slots
  Q_OBJECT

  public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow() override;

  public slots:
  void showMessage();
      void copiaTexto();


  private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H







