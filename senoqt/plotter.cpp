#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>

Plotter::Plotter(QWidget *parent)
  : QWidget{parent}
{ }

void Plotter::paintEvent(QPaintEvent *e)
{
  QPainter painter(this);
  QPen pen;
  QBrush brush;

  pen.setColor(QColor(0,0,255)); //(r,g,b)
  pen.setWidth(2);

  brush.setColor(QColor(255,255,200));
  brush.setStyle(Qt::SolidPattern);

  painter.setPen(pen);
  painter.setBrush(brush);

  painter.drawRect(0,0,width(), height());
}










