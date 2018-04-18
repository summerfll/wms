#include "tag_add.h"
#include "ui_tag_add.h"

tag_add::tag_add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tag_add)
{
    ui->setupUi(this);
}

tag_add::~tag_add()
{
    delete ui;
}
