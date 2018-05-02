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
    ~storage();
    explicit storage(QWidget *parent = 0);
    static storage* ShowWin()  //单例模式，只能产生一个窗口
    {
        if(Instance1==NULL)
            Instance1=new storage();
        return Instance1;
    }

private:

private:
    static storage* Instance1;


private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



private:
    Ui::storage *ui;
};

#endif // STORAGE_H
