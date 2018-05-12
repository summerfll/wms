#ifndef ADD_PRODUCT_H
#define ADD_PRODUCT_H

#include <QWidget>

namespace Ui {
class add_product;
}

class add_product : public QWidget
{
    Q_OBJECT

public:
    explicit add_product(QWidget *parent = 0);
    ~add_product();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::add_product *ui;
};

#endif // ADD_PRODUCT_H
