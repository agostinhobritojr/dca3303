#include "dialogconfig.h"
#include "ui_dialogconfig.h"

DialogConfig::DialogConfig(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogConfig)
{
    ui->setupUi(this);
}

DialogConfig::~DialogConfig()
{
    delete ui;
}

int DialogConfig::getR()
{
    return ui->horizontalSliderR->value();
}

int DialogConfig::getG()
{
    return ui->horizontalSliderG->value();
}

int DialogConfig::getB()
{
    return ui->horizontalSliderB->value();
}


