#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{
    fase = 0;
    // cria um temporizador que a cada 200ms
    // eh ativado
    startTimer(50);
}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    QBrush brush;

    // definindo as propriedades da caneta
    pen.setWidth(3);
    pen.setColor(QColor(0,0,255));
    painter.setPen(pen);

    // definindo as propriedades do preenchimento
    brush.setColor(QColor(255,255,200));
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    // desenha o fundo da tela
    painter.drawRect(0,0,width(), height());

    // desenha o eixo horizontal
    painter.drawLine(0,height()/2, width(), height()/2);

    // muda a caneta de tracado da funcao
    pen.setColor(QColor(255,0,0));
    pen.setWidth(1);
    painter.setPen(pen);

    int x0, y0, x1, y1;
    x0 = 0;
    y0 = height()/2;

//    fase=0.7;
    for(x1 = 1; x1 < width(); x1++){
        y1 = height()/2-
             height()/2*sin(fase+2*x1*2*3.1415/width());
        painter.drawLine(x0,y0,x1,y1);
        x0 = x1;
        y0 = y1;
    }
}

void Plotter::timerEvent(QTimerEvent *event)
{
    fase = fase+0.1;
    // manda repintar o componente
    repaint();
}













