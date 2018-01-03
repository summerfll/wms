#include "storage.h"
#include "ui_storage.h"
#include <QFont>
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
