#include "homepage.h"
#include "ui_homepage.h"

Homepage::Homepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Homepage)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->setGeometry(700,50,550,950);
}

Homepage::~Homepage()
{
    delete ui;
}

void Homepage::on_timelinebutton_clicked()
{
}

