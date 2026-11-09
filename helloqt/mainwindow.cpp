#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow){
  ui->setupUi(this);

  // coloque aqui todas as conexoes sinais/slots que forem
  // necessarias

  connect(ui->pushButtonMensagem,
          SIGNAL(clicked(bool)),
          this,
          SLOT(showMessage()));

  connect(ui->pushButtonCopia,
          SIGNAL(clicked(bool)),
          this,
          SLOT(copiaTexto()));

}

void MainWindow::showMessage(){
  QMessageBox box;
  box.setText(QString("Alo, <b>Maria</b>!"));
  box.exec();
}

void MainWindow::copiaTexto()
{
  QString s;
  s = ui->plainTextEditOrigem->toPlainText();
  ui->textEditDestino->setText(s);
}

MainWindow::~MainWindow()
{
  delete ui;
}

