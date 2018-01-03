#ifndef STORAGE_H
#define STORAGE_H

#include <QWidget>

namespace Ui {
class storage;
}

class storage : public QWidget
{
    Q_OBJECT

public:
    explicit storage(QWidget *parent = 0);
    ~storage();

private:
    Ui::storage *ui;
};

#endif // STORAGE_H
