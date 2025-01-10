#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QPlainTextEdit>
#include <QMessageBox>
#include "dialogconfig.h"
#include <QColorDialog>

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

    connect(ui->actionQuit,
            SIGNAL(triggered(bool)),
            this,
            SLOT(close()));

    connect(ui->actionConfig,
            SIGNAL(triggered(bool)),
            this,
            SLOT(config()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::config(){
    DialogConfig d;
    QMessageBox box;
    QString texto;

    QColorDialog colordialog;
    colordialog.exec();
    ui->widgetPlotter->setBackground(colordialog.currentColor());

    /*
    if( d.exec() == QDialog::Accepted){
        int r, g, b;
        r = d.getR();
        g = d.getG();
        b = d.getB();
        texto = QString("R = ") +
                QString().setNum(r)+QString("<br>")+
                QString("G = ") +
                QString().setNum(g)+QString("<br>")+
                QString("B = ") +
                QString().setNum(b);
        ui->widgetPlotter->setBackground(QColor(r,g,b));
    }
    else{
        texto = QString("Alo, <b>CANCEL</b>!");
    }
    box.setText(texto);
    box.exec();
*/
}












