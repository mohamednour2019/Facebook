#include "signup.h"
#include "ui_signup.h"

signup::signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->setGeometry(700,50,550,950);
}

signup::~signup()
{
    delete ui;
}

void signup::on_loginbuttonloginform_clicked()
{

}

