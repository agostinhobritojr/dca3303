#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QColorDialog>

#include "dialogcor.h"

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

    ui->lcdNumberAmp->display(ui->horizontalSliderAmp->value());
    ui->lcdNumberFreq->display(ui->horizontalSliderFreq->value());
    ui->lcdNumberVel->display(ui->horizontalSliderVel->value());


    connect(ui->widget,
            SIGNAL(mudaX(int)),
            ui->lcdNumberX,
            SLOT(display(int)));

    connect(ui->widget,
            SIGNAL(mudaY(int)),
            ui->lcdNumberY,
            SLOT(display(int)));

    connect(ui->actionSair,
            SIGNAL(triggered()),
            this,
            SLOT(finaliza()));

    connect(ui->actionSobre,
            SIGNAL(triggered()),
            this,
            SLOT(sobre()));

    connect(ui->actionMudaCor,
            SIGNAL(triggered()),
            this,
            SLOT(mudaCor()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::finaliza()
{
    close();
}

void MainWindow::mudaCor()
{
    DialogCor dialog;
    QMessageBox box;
    QColorDialog colorDialog;

    if(colorDialog.exec() == QDialog::Accepted){
        ui->widget->mudaCor(colorDialog.selectedColor().red(),
                            colorDialog.selectedColor().green(),
                            colorDialog.selectedColor().blue());
    }

/*    if(dialog.exec() == QDialog::Accepted){
        QString s;
        s = QString("R: ") + QString::number(dialog.getR())+
            QString("<br>") +
            QString("G: ") + QString::number(dialog.getG())+
            QString("<br>") +
            QString("B: ") + QString::number(dialog.getB());
        box.setText(s);
        box.exec();
        ui->widget->mudaCor(dialog.getR(),dialog.getG(),
                                           dialog.getB());
    }
*/
}

void MainWindow::sobre()
{
    QMessageBox box;
    box.setText("Seno Qt. Mostra um seno animado!");
    box.exec();
}







