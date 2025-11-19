#include "mainwindow.h"
#include "ui_mainwindow.h"

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

}

MainWindow::~MainWindow()
{
    delete ui;
}
