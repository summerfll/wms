/********************************************************************************
** Form generated from reading UI file 'storage_delete.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGE_DELETE_H
#define UI_STORAGE_DELETE_H

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

class Ui_storage_delete
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *storage_delete)
    {
        if (storage_delete->objectName().isEmpty())
            storage_delete->setObjectName(QStringLiteral("storage_delete"));
        storage_delete->resize(391, 205);
        storage_delete->setMaximumSize(QSize(391, 205));
        storage_delete->setStyleSheet(QStringLiteral(""));
        label = new QLabel(storage_delete);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 30, 121, 16));
        lineEdit = new QLineEdit(storage_delete);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 80, 113, 20));
        label_2 = new QLabel(storage_delete);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 80, 71, 16));
        pushButton = new QPushButton(storage_delete);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 140, 75, 23));
        pushButton_2 = new QPushButton(storage_delete);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 140, 75, 23));

        retranslateUi(storage_delete);

        QMetaObject::connectSlotsByName(storage_delete);
    } // setupUi

    void retranslateUi(QWidget *storage_delete)
    {
        storage_delete->setWindowTitle(QApplication::translate("storage_delete", "Form", 0));
        label->setText(QApplication::translate("storage_delete", "\345\205\245\345\272\223\350\256\242\345\215\225\345\210\240\351\231\244", 0));
        label_2->setText(QApplication::translate("storage_delete", "\350\256\242\345\215\225\345\217\267\357\274\232", 0));
        pushButton->setText(QApplication::translate("storage_delete", "\347\241\256\345\256\232", 0));
        pushButton_2->setText(QApplication::translate("storage_delete", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class storage_delete: public Ui_storage_delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGE_DELETE_H
