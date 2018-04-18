/********************************************************************************
** Form generated from reading UI file 'tag_add.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAG_ADD_H
#define UI_TAG_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tag_add
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *tag_add)
    {
        if (tag_add->objectName().isEmpty())
            tag_add->setObjectName(QStringLiteral("tag_add"));
        tag_add->resize(400, 300);
        label = new QLabel(tag_add);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 30, 54, 12));
        label_2 = new QLabel(tag_add);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 54, 12));
        label_3 = new QLabel(tag_add);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 80, 54, 12));
        label_4 = new QLabel(tag_add);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 120, 54, 12));
        label_5 = new QLabel(tag_add);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 110, 54, 12));
        label_6 = new QLabel(tag_add);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 160, 54, 12));
        label_7 = new QLabel(tag_add);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 160, 54, 12));
        label_8 = new QLabel(tag_add);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 200, 54, 12));
        lineEdit = new QLineEdit(tag_add);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 80, 113, 20));
        lineEdit_2 = new QLineEdit(tag_add);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(260, 70, 113, 20));
        lineEdit_3 = new QLineEdit(tag_add);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 120, 113, 20));
        lineEdit_4 = new QLineEdit(tag_add);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(260, 110, 113, 20));
        lineEdit_5 = new QLineEdit(tag_add);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(90, 160, 113, 20));
        lineEdit_6 = new QLineEdit(tag_add);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(250, 160, 113, 20));
        lineEdit_7 = new QLineEdit(tag_add);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(90, 200, 113, 20));
        pushButton = new QPushButton(tag_add);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 250, 75, 23));
        pushButton_2 = new QPushButton(tag_add);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 250, 75, 23));
        pushButton_3 = new QPushButton(tag_add);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 240, 75, 23));

        retranslateUi(tag_add);

        QMetaObject::connectSlotsByName(tag_add);
    } // setupUi

    void retranslateUi(QWidget *tag_add)
    {
        tag_add->setWindowTitle(QApplication::translate("tag_add", "Form", 0));
        label->setText(QApplication::translate("tag_add", "\346\226\260\345\242\236\346\240\207\347\255\276", 0));
        label_2->setText(QApplication::translate("tag_add", "\346\240\207\347\255\276\347\274\226\345\217\267", 0));
        label_3->setText(QApplication::translate("tag_add", "\346\240\207\347\255\276\346\240\207\350\257\206", 0));
        label_4->setText(QApplication::translate("tag_add", "\346\240\207\347\255\276\347\261\273\345\236\213", 0));
        label_5->setText(QApplication::translate("tag_add", "\346\240\207\347\255\276\347\212\266\346\200\201", 0));
        label_6->setText(QApplication::translate("tag_add", "\347\224\237\344\272\247\345\216\202\345\225\206", 0));
        label_7->setText(QApplication::translate("tag_add", "\347\224\237\344\272\247\346\227\245\346\234\237", 0));
        label_8->setText(QApplication::translate("tag_add", "\345\244\207\346\263\250", 0));
        pushButton->setText(QApplication::translate("tag_add", "\347\241\256\350\256\244", 0));
        pushButton_2->setText(QApplication::translate("tag_add", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("tag_add", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class tag_add: public Ui_tag_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAG_ADD_H
