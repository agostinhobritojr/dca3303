#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>

Plotter::Plotter(QWidget *parent)
    : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    QBrush brush;
    QPen pen;

    p.setRenderHint(QPainter::Antialiasing);

    brush.setColor(QColor(255,255,200,255)); // amarelo
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
        y1 = height()/2 - height()/2*std::sin(2 * M_PI * (float)x1/width());
        p.drawLine(x0,y0,x1,y1);
        x0 = x1;
        y0 = y1;
    }
}











