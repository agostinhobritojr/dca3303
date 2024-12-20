#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QPlainTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonCopiar,
            SIGNAL(clicked()),
            this,
            SLOT(copiaTexto()));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::copiaTexto(){
    QString texto;
    texto = ui->plainTextEditOrigem->toPlainText();
    ui->plainTextEditDestino->setPlainText(texto);
}












