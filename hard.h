#ifndef HARD_H
#define HARD_H
#include <QDialog>
#include <QPainter>
#include <QPaintEvent>

namespace Ui {
class Hard;
}

class Hard : public QDialog
{
    Q_OBJECT

public:
    explicit Hard(QWidget *parent = nullptr);
    ~Hard();
    void paintEvent(QPaintEvent *);

private:
    Ui::Hard *ui;
};

#endif // HARD_H
