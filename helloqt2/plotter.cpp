#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{}

void Plotter::paintEvent(QPaintEvent *e){
    QPainter painter(this);
    QPen pen;
    QBrush brush;

  //  painter.setRenderHint(QPainter::Antialiasing);

    pen.setColor(QColor(0,0,255));
    pen.setWidth(2);
    painter.setPen(pen);

    brush.setColor(QColor(255,255,200));
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    painter.drawRect(0,0,width(), height());

    pen.setWidth(2);
    painter.setPen(pen);
    painter.drawLine(0, height()/2, width(),
                     height()/2);
/*
    pen.setWidth(1);
    pen.setColor(QColor(255,0,0));
    painter.setPen(pen);
    float x0, y0, x1, y1;
    float w, teta;
    teta = 0;
    w = 1;
    for(int i=1; i<width(); i++){
        // calcula o seno para desenho
        x1 = i;
        y1 = height()/2-sin(w*2*M_PI*i/width()+teta)*height()/2;
        painter.drawLine(x0,y0,x1,y1);
        x0 = x1; y0 = y1;
    }
*/
}










