/********************************************************************************
** Form generated from reading UI file 'storage_modify2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGE_MODIFY2_H
#define UI_STORAGE_MODIFY2_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_storage_modify2
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_1;
    QLineEdit *lineEdit1;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_2;
    QLineEdit *lineEdit2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_3;
    QLineEdit *lineEdit3;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_4;
    QLineEdit *lineEdit4;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_5;
    QLineEdit *lineEdit5;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_6;
    QLineEdit *lineEdit6;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_7;
    QLineEdit *lineEdit7;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_8;
    QLineEdit *lineEdit8;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QWidget *storage_modify2)
    {
        if (storage_modify2->objectName().isEmpty())
            storage_modify2->setObjectName(QStringLiteral("storage_modify2"));
        storage_modify2->resize(550, 350);
        storage_modify2->setMinimumSize(QSize(550, 0));
        storage_modify2->setMaximumSize(QSize(550, 350));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/\344\277\256\346\224\271.png"), QSize(), QIcon::Normal, QIcon::On);
        storage_modify2->setWindowIcon(icon);
        storage_modify2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)"));
        gridLayout = new QGridLayout(storage_modify2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_1 = new QLabel(storage_modify2);
        label_1->setObjectName(QStringLiteral("label_1"));

        horizontalLayout_11->addWidget(label_1);

        lineEdit1 = new QLineEdit(storage_modify2);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setEnabled(true);
        lineEdit1->setReadOnly(true);
        lineEdit1->setClearButtonEnabled(false);

        horizontalLayout_11->addWidget(lineEdit1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        label_2 = new QLabel(storage_modify2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_11->addWidget(label_2);

        lineEdit2 = new QLineEdit(storage_modify2);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));

        horizontalLayout_11->addWidget(lineEdit2);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_3 = new QLabel(storage_modify2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_12->addWidget(label_3);

        lineEdit3 = new QLineEdit(storage_modify2);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));

        horizontalLayout_12->addWidget(lineEdit3);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        label_4 = new QLabel(storage_modify2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_12->addWidget(label_4);

        lineEdit4 = new QLineEdit(storage_modify2);
        lineEdit4->setObjectName(QStringLiteral("lineEdit4"));

        horizontalLayout_12->addWidget(lineEdit4);


        verticalLayout_3->addLayout(horizontalLayout_12);

        verticalSpacer_8 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_5 = new QLabel(storage_modify2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_13->addWidget(label_5);

        lineEdit5 = new QLineEdit(storage_modify2);
        lineEdit5->setObjectName(QStringLiteral("lineEdit5"));

        horizontalLayout_13->addWidget(lineEdit5);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);

        label_6 = new QLabel(storage_modify2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_13->addWidget(label_6);

        lineEdit6 = new QLineEdit(storage_modify2);
        lineEdit6->setObjectName(QStringLiteral("lineEdit6"));

        horizontalLayout_13->addWidget(lineEdit6);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalSpacer_9 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_9);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_7 = new QLabel(storage_modify2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_14->addWidget(label_7);

        lineEdit7 = new QLineEdit(storage_modify2);
        lineEdit7->setObjectName(QStringLiteral("lineEdit7"));

        horizontalLayout_14->addWidget(lineEdit7);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_16);

        label_8 = new QLabel(storage_modify2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_14->addWidget(label_8);

        lineEdit8 = new QLineEdit(storage_modify2);
        lineEdit8->setObjectName(QStringLiteral("lineEdit8"));
        lineEdit8->setEnabled(true);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        lineEdit8->setFont(font);
        lineEdit8->setLayoutDirection(Qt::RightToLeft);
        lineEdit8->setReadOnly(true);

        horizontalLayout_14->addWidget(lineEdit8);


        verticalLayout_3->addLayout(horizontalLayout_14);


        gridLayout->addLayout(verticalLayout_3, 4, 1, 1, 3);

        horizontalSpacer_18 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_18, 4, 4, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 5, 2, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_17, 4, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_11, 0, 2, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 3, 2, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_13, 7, 2, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(10);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButton = new QPushButton(storage_modify2);
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

        horizontalLayout_15->addWidget(pushButton);

        pushButton_2 = new QPushButton(storage_modify2);
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

        horizontalLayout_15->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(storage_modify2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(50, 25));
        pushButton_3->setMaximumSize(QSize(50, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_15->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout_15, 6, 0, 1, 5);

        label = new QLabel(storage_modify2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\245\267\344\275\223\";"));

        gridLayout->addWidget(label, 1, 2, 1, 1);

        label->raise();

        retranslateUi(storage_modify2);

        QMetaObject::connectSlotsByName(storage_modify2);
    } // setupUi

    void retranslateUi(QWidget *storage_modify2)
    {
        storage_modify2->setWindowTitle(QApplication::translate("storage_modify2", "Form", 0));
        label_1->setText(QApplication::translate("storage_modify2", "\350\256\242 \345\215\225 \345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("storage_modify2", "\344\272\247\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        label_3->setText(QApplication::translate("storage_modify2", "\344\272\247\345\223\201\347\274\226\345\217\267\357\274\232", 0));
        label_4->setText(QApplication::translate("storage_modify2", "\346\240\207\347\255\276\347\274\226\345\217\267\357\274\232", 0));
        label_5->setText(QApplication::translate("storage_modify2", "\346\225\260    \351\207\217\357\274\232", 0));
        label_6->setText(QApplication::translate("storage_modify2", "\344\273\223    \345\272\223\357\274\232", 0));
        label_7->setText(QApplication::translate("storage_modify2", "\347\256\241 \347\220\206 \345\221\230\357\274\232", 0));
        label_8->setText(QApplication::translate("storage_modify2", "\345\205\245\345\272\223\346\227\266\351\227\264\357\274\232", 0));
        pushButton->setText(QApplication::translate("storage_modify2", "\347\241\256\350\256\244", 0));
        pushButton_2->setText(QApplication::translate("storage_modify2", "\351\207\215\347\275\256", 0));
        pushButton_3->setText(QApplication::translate("storage_modify2", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("storage_modify2", "   \350\256\242\345\215\225\344\277\256\346\224\271", 0));
    } // retranslateUi

};

namespace Ui {
    class storage_modify2: public Ui_storage_modify2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGE_MODIFY2_H
