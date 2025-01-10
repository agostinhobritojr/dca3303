#ifndef DIALOGCONFIG_H
#define DIALOGCONFIG_H

#include <QDialog>

namespace Ui {
class DialogConfig;
}

class DialogConfig : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConfig(QWidget *parent = nullptr);
    ~DialogConfig();
    int getR();
    int getG();
    int getB();

private:
    Ui::DialogConfig *ui;
};

#endif // DIALOGCONFIG_H
