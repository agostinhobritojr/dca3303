#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);

    connect(ui->pushButtonDiferente,
    SIGNAL(clicked()),
    this,
    SLOT(close()));

    connect(ui->pushButtonExit,
            SIGNAL(clicked()),
            this,
            SLOT(vouMorrer()));

    connect(ui->horizontalSlider,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(testaSlider(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::vouMorrer()
{
    exit(0);
}

void MainWindow::testaSlider(int valor)
{
    //  if(valor > 50){
    //    exit(0);
    //}
}












