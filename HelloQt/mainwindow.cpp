#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // conectar o sinal do botao clicado
    // com o slot mataTudo()

    connect(ui->pushButtonQuit,
            SIGNAL(clicked()),
            this,
            SLOT(mataTudo()));

    connect(ui->pushButtonCopia,
            SIGNAL(clicked()),
            this,
            SLOT(copiaTexto()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mataTudo(){
    QMessageBox m;

    m.setText("Ovomo rê...");
    m.exec();
    close();
}

void MainWindow::copiaTexto()
{
    ui->textEdit->setText(
        "<b>"+
        ui->lineEdit->text()
        +"</b>");
}












