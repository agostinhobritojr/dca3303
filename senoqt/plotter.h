#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    float fase;
    float freq;
    float vel;
    float amp;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
public slots:
    void setAmplitude(int amp);
    void setFrequencia(int freq);
    void setVelocidade(int vel);
signals:
    void mudaX(int);
    void mudaY(int);
};

#endif // PLOTTER_H




