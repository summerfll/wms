#include "find_result.h"
#include "ui_find_result.h"

find_result::find_result(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::find_result)
{
    ui->setupUi(this);
    this->setWindowTitle("查询结果");
}

find_result::~find_result()
{
    delete ui;
}

void find_result::displayPassword(QString password)
{
    ui->lineEdit->setText(password);
}
