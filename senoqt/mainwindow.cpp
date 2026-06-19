#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSliderAmp,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaAmplitude(int)));

    connect(ui->horizontalSliderFreq,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaFrequencia(int)));

    connect(ui->horizontalSliderVel,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaVelocidade(int)));

    connect(ui->widget,
            SIGNAL(mudaX(int)),
            ui->lcdNumberX,
            SLOT(display(int)));

    connect(ui->widget,
            SIGNAL(mudaY(int)),
            ui->lcdNumberY,
            SLOT(display(int)));

    connect(ui->actionHello,
            SIGNAL(triggered(bool)),
            this,
            SLOT(mostraMensagem()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mostraMensagem(){
    Dialog d;
    d.exec();

    qDebug() << d.getR() << d.getG() << d.getB();

    ui->widget->setBackgroundColor(d.getR(),d.getG(),d.getB());
    /*
    QMessageBox box;
    box.setText("<b>Alo, maria!</b>"
                "<br> Esta é uma caixa de mensagem");
    box.exec();
*/
}




