#ifndef STORAGE_H
#define STORAGE_H

#include <QWidget>
//入库管理
namespace Ui {
class storage;
}

class storage : public QWidget
{
    Q_OBJECT

public:
    explicit storage(QWidget *parent = 0);
    ~storage();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::storage *ui;
};

#endif // STORAGE_H
