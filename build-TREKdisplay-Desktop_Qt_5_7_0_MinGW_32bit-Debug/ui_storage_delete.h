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
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit1;

    void setupUi(QWidget *storage_delete)
    {
        if (storage_delete->objectName().isEmpty())
            storage_delete->setObjectName(QStringLiteral("storage_delete"));
        storage_delete->resize(300, 205);
        storage_delete->setMaximumSize(QSize(300, 205));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/Button Cancel.png"), QSize(), QIcon::Normal, QIcon::On);
        storage_delete->setWindowIcon(icon);
        storage_delete->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)"));
        label = new QLabel(storage_delete);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 121, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\245\267\344\275\223\";"));
        label_2 = new QLabel(storage_delete);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        pushButton = new QPushButton(storage_delete);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 140, 50, 25));
        pushButton->setMinimumSize(QSize(50, 25));
        pushButton->setMaximumSize(QSize(50, 25));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(255, 255, 255);\n"
"background-color: rgb(83, 83, 83);\n"
"border-radius: 8px;\n"
"border: 3px groove rgb(98, 98, 98);\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed{\n"
"border-style: inset;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"}\n"
"\n"
""));
        pushButton_2 = new QPushButton(storage_delete);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 140, 50, 25));
        pushButton_2->setMinimumSize(QSize(50, 25));
        pushButton_2->setMaximumSize(QSize(50, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(255, 255, 255);\n"
"background-color: rgb(83, 83, 83);\n"
"border-radius: 8px;\n"
"border: 3px groove rgb(98, 98, 98);\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed{\n"
"border-style: inset;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"}\n"
"\n"
""));
        lineEdit1 = new QLineEdit(storage_delete);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setGeometry(QRect(130, 80, 113, 20));

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
