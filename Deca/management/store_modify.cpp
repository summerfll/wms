#include "store_modify.h"
#include "ui_store_modify.h"

store_modify::store_modify(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::store_modify)
{
    ui->setupUi(this);
    this->setWindowTitle("仓库信息修改");
    setAttribute(Qt::WA_DeleteOnClose);//delete store_mdf
}

store_modify::~store_modify()
{
    delete ui;
}
void store_modify::disPlayImformation(QString store_id)
{
    ui->lineEdit->setText(store_id);
}
