#include "storage.h"
#include "ui_storage.h"
#include <QFont>
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QDateTime>
storage::storage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::storage)
{
    ui->setupUi(this);
    this->setWindowTitle("货物入库");
    QFont ft;
    ft.setPointSize(18);
    ui->label->setFont(ft);
}

storage::~storage()
{
    delete ui;
}

void storage::on_pushButton_3_clicked()
{
    this->close();
}

void storage::on_pushButton_clicked()
{
    QString str1;
    QString str2;
    QString str3;
    QString str4;
    QString str5;
    QString str6;
    QString str7;
    QString str8;
    QSqlQuery query;
    str1=ui->lineEdit_1->text().trimmed();
    str2=ui->lineEdit_2->text().trimmed();
    str3=ui->lineEdit_3->text().trimmed();
    str4=ui->lineEdit_4->text().trimmed();
    str5=ui->lineEdit_5->text().trimmed();
    str6=ui->lineEdit_6->text().trimmed();
    str7=ui->lineEdit_7->text().trimmed();
    QDateTime current_data=QDateTime::currentDateTime();
    QString current=current_data.toString("yyyy-MM-dd hh:mm:ss");
    str8=current;

    query.exec("select 订单号 from storage_copy where 订单号='"+str1+"'");
    if(!query.next())
    {
        if(str1!=""&&str2!=""&&str3!=""&&str4!=""&&str5!=""&&str6!=""&&str7!=""&&str8!="")
        {
            query.prepare(tr("insert into storage_copy values(:one,:two,:three,:four,:five,:six,:seven,:eight)"));
            query.bindValue(":one",str1);
            query.bindValue(":two",str2);
            query.bindValue(":three",str3);
            query.bindValue(":four",str4);
            query.bindValue(":five",str5);
            query.bindValue(":six",str6);
            query.bindValue(":seven",str7);
            query.bindValue(":eight",str8);
            query.exec();
            if(query.isActive())
            {
                query.numRowsAffected();
                QMessageBox::information(this, tr("信息"), tr("数据插入成功！"));
            }
            else
                QMessageBox::warning(this, tr("警告"), tr("数据插入失败！"));

        }
        else
            QMessageBox::warning(this, tr("警告"), tr("输入不能为空！"));

    }
    else
    {
        QMessageBox::warning(this, tr("警告"), tr("订单号是唯一的，不能重复！"));
        return ;
    }


}

void storage::on_pushButton_2_clicked()
{
    ui->lineEdit_1->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->lineEdit_7->setText("");
    ui->lineEdit_8->setText("");
}
