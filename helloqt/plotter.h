#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QPaintEvent>

class Plotter : public QWidget
{
    Q_OBJECT
public:
    explicit Plotter(QWidget *parent = nullptr);
public slots:
    void paintEvent(QPaintEvent *e);
signals:
};

#endif // PLOTTER_H
