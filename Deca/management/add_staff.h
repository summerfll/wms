#ifndef ADD_STAFF_H
#define ADD_STAFF_H

#include <QWidget>

namespace Ui {
class add_staff;
}

class add_staff : public QWidget
{
    Q_OBJECT

public:
    explicit add_staff(QWidget *parent = 0);
    ~add_staff();

private:
    Ui::add_staff *ui;
};

#endif // ADD_STAFF_H
