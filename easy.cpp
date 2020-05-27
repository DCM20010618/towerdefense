#include "easy.h"
#include "ui_easy.h"

Easy::Easy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Easy)
{
    ui->setupUi(this);
    setFixedSize(1280,720);
}

Easy::~Easy()
{
    delete ui;
}

void Easy::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, 1280,720,QPixmap("://images/easypattern.jpg"));
}
