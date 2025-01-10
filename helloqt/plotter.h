#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QPaintEvent>

/**
 * @brief A classe Plotter desenha um seno na tela
 */

class Plotter : public QWidget
{
    Q_OBJECT
private:
    float a, w, teta, veloc;
    int timerId;
    QColor background;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void setBackground(QColor color);
public slots:
    void paintEvent(QPaintEvent *e);
    void timerEvent(QTimerEvent *e);
    /**
     * @brief mudaAmplitude muda a amplitude do seno
     * @param ampl serve para dizer qual a amplitude
     */
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
