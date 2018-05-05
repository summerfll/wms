#ifndef STAFF_MODIFY_H
#define STAFF_MODIFY_H


#include <QWidget>

namespace Ui {
class staff_modify;
}

class staff_modify : public QWidget
{
    Q_OBJECT

public:
    explicit staff_modify(QWidget *parent = 0);
    ~staff_modify();

private:
    Ui::staff_modify *ui;
private slots:
    void disPlayImformation(QString staff_id);
};




#endif // STAFF_MODIFY_H
