#ifndef FIND_RESULT_H
#define FIND_RESULT_H

#include <QWidget>

namespace Ui {
class find_result;
}

class find_result : public QWidget
{
    Q_OBJECT

public:
    explicit find_result(QWidget *parent = 0);
    ~find_result();
private slots:
    void displayPassword(QString password);
private:
    Ui::find_result *ui;
};

#endif // FIND_RESULT_H
