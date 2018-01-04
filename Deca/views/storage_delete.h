#ifndef STORAGE_DELETE_H
#define STORAGE_DELETE_H

#include <QWidget>

namespace Ui {
class storage_delete;
}

class storage_delete : public QWidget
{
    Q_OBJECT

public:
    explicit storage_delete(QWidget *parent = 0);
    ~storage_delete();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::storage_delete *ui;
};

#endif // STORAGE_DELETE_H
