#include "control.h"
#include "ui_control.h"
#include "QStackedLayout"

Control::Control(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Control)
{
    ui->setupUi(this);
    this->InitWindow();
}

Control::~Control()
{
    delete ui;
}

void Control::InitWindow()
{
    QString qss = QString("QWidget#Control{border-image: url(:/images/main2.jpg);}");
    qss += "QToolButton{color:#E7ECF0;background-color:rgba(0,0,0,0);border-style:none;}";
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);
    this->setStyleSheet(qss);
}
