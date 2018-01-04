#ifndef STORAGE_MODIFY_H
#define STORAGE_MODIFY_H

#include <QWidget>
#include <QString>
namespace Ui {
class storage_modify;
}

class storage_modify : public QWidget
{
    Q_OBJECT

public:
    explicit storage_modify(QWidget *parent = 0);
    ~storage_modify();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::storage_modify *ui;
signals:
    void sendOrderID(QString);

};

#endif // STORAGE_MODIFY_H
