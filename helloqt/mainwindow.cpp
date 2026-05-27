#include "mainwindow.h"
#include "ui_mainwindow.h"

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

}

MainWindow::~MainWindow()
{
    delete ui;
}
