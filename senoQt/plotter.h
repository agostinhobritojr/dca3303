#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    float fase;
    float amp;
    float freq;
    float vel;
    int r, g, b;
public:
    explicit Plotter(QWidget *parent = nullptr);

public slots:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void setAmplitude(int amp);
    void setFrequencia(int freq);
    void setVelocidade(int vel);
    void mudaCor(int r, int g, int b);

signals:
    void mudaX(int);
    void mudaY(int);
};

#endif // PLOTTER_H
