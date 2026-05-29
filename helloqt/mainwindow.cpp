#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    ui = new Ui::MainWindow;
    ui->setupUi(this);

connect(ui->horizontalSlider_2,
            SIGNAL(valueChanged(int)),
            ui->lcdNumber_2,
            SLOT(display(int)));

    connect(ui->pushButtonCopy,
        SIGNAL(clicked(bool)),
        this,
        SLOT(copyText()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::copyText(){
    ui->textEditRight->setText(ui->textEditLeft->toPlainText());
    qDebug() << "Alo, copyText";
}








