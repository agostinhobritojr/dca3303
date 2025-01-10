#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>
#include <QDebug>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{
    a = 1;
    w = 1;
    teta = 0;
    timerId = startTimer(10);
    setMouseTracking(true);
    background = QColor(255,255,200);
}

void Plotter::setBackground(QColor color){
    background = color;
    repaint();
}

void Plotter::paintEvent(QPaintEvent *e){
    QPainter painter(this);
    QPen pen;
    QBrush brush;

    painter.setRenderHint(QPainter::Antialiasing);

    pen.setColor(QColor(0,0,255));
    pen.setWidth(2);
    painter.setPen(pen);

    brush.setColor(background);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    painter.drawRect(0,0,width(), height());

    pen.setWidth(2);
    painter.setPen(pen);
    painter.drawLine(0, height()/2, width(),
                     height()/2);

    pen.setWidth(1);
    pen.setColor(QColor(255,0,0));
    painter.setPen(pen);
    float x0, y0, x1, y1;
    x0 = 0;
    y0 = height()/2-a*sin(w*2*M_PI*x0/width()+teta)*height()/2;
    for(int i=1; i<width(); i++){
        // calcula o seno para desenho
        x1 = i;
        y1 = height()/2-a*sin(w*2*M_PI*i/width()+teta)*height()/2;
        painter.drawLine(x0,y0,x1,y1);
        x0 = x1; y0 = y1;
    }

}

void Plotter::timerEvent(QTimerEvent *e)
{
    qDebug() << timerId << " " << e->timerId();
    // killTimer(timerId);
    teta = teta + veloc;
    if(teta > 2*M_PI){
        teta = 0;
    }
    repaint();
}

void Plotter::mudaAmplitude(int ampl){
   // qDebug() << ampl;
    a = (float) ampl/100;
   repaint();
}

void Plotter::mudaFrequencia(int freq)
{
    w = freq;
    repaint();
}

void Plotter::mudaVelocidade(int veloc)
{
    this->veloc = (float) veloc/1000;
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
//    qDebug() << event->x() << event->y();
    emit mudaX(event->x());
    emit mudaY(event->y());
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
    //    qDebug() << event->x() << event->y();
    emit mudaX(event->x());
    emit mudaY(event->y());
}










