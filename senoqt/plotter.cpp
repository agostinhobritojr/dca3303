#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>
#include <QMouseEvent>
#include <QDebug>

Plotter::Plotter(QWidget *parent)
    : QWidget(parent)
{
    amp = 1;
    freq = 1;
    fase = 0;
    vel = 0;
    backR = 255;
    backG = 255;
    backB = 200;
    startTimer(10);
    setMouseTracking(true);
}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    QBrush brush;
    QPen pen;

    p.setRenderHint(QPainter::Antialiasing);

    brush.setColor(QColor(backR, backG, backB,255)); // amarelo
    brush.setStyle(Qt::SolidPattern);

    p.setBrush(brush);

    pen.setColor(Qt::blue);
    pen.setWidth(3);

    p.setPen(pen);

    p.drawRect(0,0,width(),height());
  //  p.drawRect(10,10,30,30);

    pen.setWidth(1);
    pen.setStyle(Qt::DashLine);
    p.setPen(pen);

    p.drawLine(0, height()/2, width(), height()/2);

    pen.setStyle(Qt::SolidLine);
    pen.setColor(QColor(255,0,0,255));
    p.setPen(pen);

    int x0, y0, x1, y1;
    x0 = 0;
    y0 = height()/2;

    for(int i=1; i<width(); i++){
        x1 = i;
        y1 = height()/2 - amp*height()/2*std::sin(2 * M_PI *
                      freq * (float)x1/width() + fase);
        p.drawLine(x0,y0,x1,y1);
        x0 = x1;
        y0 = y1;
    }
}

void Plotter::timerEvent(QTimerEvent *event)
{
    fase = fase + 0.02 * vel;
    repaint();
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
    emit mudaX(event->pos().x());
    emit mudaY(event->pos().y());
    qDebug() << event->pos().x() << event->pos().y();
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
    emit mudaX(event->pos().x());
    emit mudaY(event->pos().y());
}

void Plotter::setBackgroundColor(int r, int g, int b)
{
    backR = r;
    backG = g;
    backB = b;
    repaint();
}


void Plotter::mudaVelocidade(int vel)
{
    this->vel = vel;
    repaint();
}

void Plotter::mudaAmplitude(int amp){
    this->amp = amp/100.0;
    repaint();
}

void Plotter::mudaFrequencia(int freq)
{
    this->freq = freq;
    repaint();
}










