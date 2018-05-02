/********************************************************************************
** Form generated from reading UI file 'storage_modify.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGE_MODIFY_H
#define UI_STORAGE_MODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_storage_modify
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *storage_modify)
    {
        if (storage_modify->objectName().isEmpty())
            storage_modify->setObjectName(QStringLiteral("storage_modify"));
        storage_modify->resize(300, 236);
        storage_modify->setMaximumSize(QSize(300, 236));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/Customize.png"), QSize(), QIcon::Normal, QIcon::On);
        storage_modify->setWindowIcon(icon);
        storage_modify->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)"));
        gridLayout = new QGridLayout(storage_modify);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(storage_modify);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\245\267\344\275\223\";"));

        gridLayout->addWidget(label, 1, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 8, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(storage_modify);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(storage_modify);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        pushButton = new QPushButton(storage_modify);
        pushButton->setObjectName(QStringLiteral("pushButton"));
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

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(storage_modify);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
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

        horizontalLayout_2->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_2, 7, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(0, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 1, 1, 1);


        retranslateUi(storage_modify);

        QMetaObject::connectSlotsByName(storage_modify);
    } // setupUi

    void retranslateUi(QWidget *storage_modify)
    {
        storage_modify->setWindowTitle(QApplication::translate("storage_modify", "Form", 0));
        label->setText(QApplication::translate("storage_modify", "    \350\276\223\345\205\245\344\277\256\346\224\271\350\256\242\345\215\225\345\217\267", 0));
        label_2->setText(QApplication::translate("storage_modify", "\350\256\242\345\215\225\345\217\267\357\274\232 ", 0));
        pushButton->setText(QApplication::translate("storage_modify", "\347\241\256\350\256\244", 0));
        pushButton_2->setText(QApplication::translate("storage_modify", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class storage_modify: public Ui_storage_modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGE_MODIFY_H
