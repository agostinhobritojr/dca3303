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
