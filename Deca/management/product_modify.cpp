#include "product_modify.h"
#include "ui_product_modify.h"

product_modify::product_modify(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::product_modify)
{
    ui->setupUi(this);
    this->setWindowTitle("产品信息修改");
    setAttribute(Qt::WA_DeleteOnClose);//delete product_mdf
}

product_modify::~product_modify()
{
    delete ui;
}
void product_modify::disPlayImformation(QString product_id)
{
    ui->lineEdit->setText(product_id);

}
