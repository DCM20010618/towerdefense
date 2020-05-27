#ifndef EASY_H
#define EASY_H
#include <QDialog>
#include <QPainter>
#include <QPaintEvent>

namespace Ui {
class Easy;
}

class Easy : public QDialog
{
    Q_OBJECT

public:
    explicit Easy(QWidget *parent = nullptr);
    ~Easy();
    void paintEvent(QPaintEvent *);

private:
    Ui::Easy *ui;
};

#endif // EASY_H
