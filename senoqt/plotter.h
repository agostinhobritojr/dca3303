#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
  public:
  explicit Plotter(QWidget *parent = nullptr);
      void paintEvent(QPaintEvent *e);
  signals:
};

#endif // PLOTTER_H
