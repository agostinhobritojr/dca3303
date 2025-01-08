#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QPaintEvent>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    float a, w, teta, veloc;
    int timerId;
public:
    explicit Plotter(QWidget *parent = nullptr);
public slots:
    void paintEvent(QPaintEvent *e);
    void timerEvent(QTimerEvent *e);
    void mudaAmplitude(int ampl);
    void mudaFrequencia(int freq);
    void mudaVelocidade(int veloc);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

signals:
    void mudaX(int);
    void mudaY(int);
};

#endif // PLOTTER_H
