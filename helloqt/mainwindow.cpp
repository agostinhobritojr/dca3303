#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QPlainTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);

    connect(ui->horizontalSliderAmpl,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(mudaAmplitude(int)));

    connect(ui->horizontalSliderFreq,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(mudaFrequencia(int)));

    connect(ui->horizontalSliderVeloc,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(mudaVelocidade(int)));

    connect(ui->widgetPlotter,
            SIGNAL(mudaX(int)),
            ui->lcdNumberX,
            SLOT(display(int)));

    connect(ui->widgetPlotter,
            SIGNAL(mudaY(int)),
            ui->lcdNumberY,
            SLOT(display(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::copiaTexto(){

}












