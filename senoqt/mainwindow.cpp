#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSliderAmp,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(setAmplitude(int)));

    connect(ui->horizontalSliderFreq,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(setFrequencia(int)));

    connect(ui->horizontalSliderVel,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(setVelocidade(int)));

    connect(ui->widget,
            SIGNAL(mudaX(int)),
            ui->lcdNumber_X,
            SLOT(display(int)));

    connect(ui->widget,
            SIGNAL(mudaY(int)),
            ui->lcdNumber_Y,
            SLOT(display(int)));

    connect(ui->actionAlo,
            SIGNAL(triggered(bool)),
            this,
            SLOT(mostraMensagem()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mostraMensagem()
{
    QString msg;
    QMessageBox box;
    msg = QString("Alo, Maria!");
    box.setText(msg);
    box.exec();
}











