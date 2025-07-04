#include "plotter.h"

#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>
#include <QDebug>
#include <QMouseEvent>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}{
    startTimer(50);
    fase = 0;
    amp = 1.0;
    freq = 1;
    vel = 0;
    setMouseTracking(true);
    r = 255;
    g = 255;
    b = 200;
}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    painter.setRenderHint(QPainter::Antialiasing);

    brush.setColor(QColor(r,g,b));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(255,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);

    painter.drawRect(0,0,width(), height());

    pen.setColor(QColor(0,0,255));
    pen.setWidth(1);

    painter.setPen(pen);

    int x0, y0, x1, y1;
    x0 = x1 = y0 = y1 = 0;
    y0 = height()/2*(1.0-amp*sin(freq*(float) x1 /width()* 2*M_PI+
                         fase));
    for(int i=1; i<width(); i++){
        x1 = i;
        y1 = height()/2*(1.0-amp*sin(freq*(float) x1 /width()* 2*M_PI +                            +
                                       fase)
                             );
        painter.drawLine(x0,y0,x1,y1);
        x0 = x1;
        y0 = y1;
    }
}

void Plotter::timerEvent(QTimerEvent *event){
    fase = fase + vel;
    repaint();
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
   // qDebug() << event->position().x() << event->position().y();
    emit mudaX(event->position().x());
    emit mudaY(event->position().y());
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
    emit mudaX(event->position().x());
    emit mudaY(event->position().y());
}

void Plotter::setAmplitude(int amp){
  //  qDebug() << amp;
  this->amp = amp/100.0;
  repaint();
}

void Plotter::setFrequencia(int freq)
{
    this->freq = freq;
    repaint();
}

void Plotter::setVelocidade(int vel)
{
    this->vel = vel/100.0;
    repaint();
}

void Plotter::mudaCor(int r, int g, int b)
{
    this->r = r;
    this->g = g;
    this->b = b;
    repaint();
}












