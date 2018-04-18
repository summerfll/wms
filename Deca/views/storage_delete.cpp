#include "storage_delete.h"
#include "ui_storage_delete.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

storage_delete* storage_delete::Instance1=NULL;

storage_delete::storage_delete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::storage_delete)
{
    ui->setupUi(this);
    this->setWindowTitle("订单修改");

}

storage_delete::~storage_delete()
{
    delete ui;
}

void storage_delete::on_pushButton_2_clicked()
{
    this->close();
}

void storage_delete::on_pushButton_clicked()
{
    QString order_id;
    QSqlQuery query;

    order_id=ui->lineEdit->text().trimmed();
    query.exec("select 订单号 from storage_copy where 订单号 ='"+order_id+"'");
    if(query.next())
    {
        query.prepare("delete from storage_copy where 订单号 = :id");
        query.bindValue(":id",order_id);
        query.exec();
        if(query.isActive()){
            QMessageBox::information(this, tr("消息"), tr("成功删除！"));
            this->close();
        }
    }
    else
        QMessageBox::warning(this, tr("错误"), tr("没有此订单号，不能删除！"));
}

