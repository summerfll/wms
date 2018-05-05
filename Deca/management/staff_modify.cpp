#include "staff_modify.h"
#include "ui_staff_modify.h"
#include<qdebug.h>

staff_modify::staff_modify(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::staff_modify)
{
    ui->setupUi(this);
    this->setWindowTitle("员工信息修改");
    setAttribute(Qt::WA_DeleteOnClose);//delete staff_mdf
}

staff_modify::~staff_modify()
{
    delete ui;
}
void staff_modify::disPlayImformation(QString staff_id)
{
    ui->lineEdit->setText(staff_id);

}
