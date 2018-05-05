#include "add_staff.h"
#include "ui_add_staff.h"

add_staff::add_staff(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_staff)
{
    ui->setupUi(this);
}

add_staff::~add_staff()
{
    delete ui;
}
