#include "tag.h"
#include "ui_tag.h"

Tag::Tag(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tag)
{
    ui->setupUi(this);
    this->setWindowTitle("增加标签");

}

Tag::~Tag()
{
    delete ui;
}
