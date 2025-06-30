#include "plotter.h"

#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}{
    startTimer(100);
    fase = 0;
}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    painter.setRenderHint(QPainter::Antialiasing);

    brush.setColor(QColor(255,255,200));
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
    y0 = height()/2*(1.0-sin((float) x1 /width()* 2*M_PI+
                         fase));
    for(int i=1; i<width(); i++){
        x1 = i;
        y1 = height()/2*(1.0-sin((float) x1 /width()* 2*M_PI +                            +
                                       fase)
                             );
        painter.drawLine(x0,y0,x1,y1);
        x0 = x1;
        y0 = y1;
    }
}

void Plotter::timerEvent(QTimerEvent *event){
    fase = fase + 0.1;
    repaint();
}












