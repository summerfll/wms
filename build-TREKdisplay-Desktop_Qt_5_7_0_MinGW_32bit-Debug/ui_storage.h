/********************************************************************************
** Form generated from reading UI file 'storage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGE_H
#define UI_STORAGE_H

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

class Ui_storage
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_1;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_9;
    QLineEdit *lineEdit_8;

    void setupUi(QWidget *storage)
    {
        if (storage->objectName().isEmpty())
            storage->setObjectName(QStringLiteral("storage"));
        storage->setWindowModality(Qt::NonModal);
        storage->resize(600, 400);
        storage->setMaximumSize(QSize(600, 400));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/CQUPT.ico"), QSize(), QIcon::Normal, QIcon::On);
        storage->setWindowIcon(icon);
        storage->setAutoFillBackground(false);
        storage->setInputMethodHints(Qt::ImhNone);
        gridLayout = new QGridLayout(storage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_7 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 2, 0, 1, 1);

        label = new QLabel(storage);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 3, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 5, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(storage);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(storage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(storage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(storage);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_1 = new QLineEdit(storage);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setAutoFillBackground(false);
        lineEdit_1->setInputMethodHints(Qt::ImhHiddenText);
        lineEdit_1->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(lineEdit_1);

        horizontalSpacer_3 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(storage);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(storage);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(storage);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(storage);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_5 = new QLabel(storage);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_4 = new QLineEdit(storage);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(storage);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        lineEdit_5 = new QLineEdit(storage);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);

        horizontalSpacer_6 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label_7 = new QLabel(storage);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_6 = new QLineEdit(storage);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_5->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(storage);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        lineEdit_7 = new QLineEdit(storage);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_4->addWidget(lineEdit_7);

        horizontalSpacer_5 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_9 = new QLabel(storage);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        lineEdit_8 = new QLineEdit(storage);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setEnabled(true);
        lineEdit_8->setEchoMode(QLineEdit::NoEcho);
        lineEdit_8->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_8);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        label->raise();

        retranslateUi(storage);

        QMetaObject::connectSlotsByName(storage);
    } // setupUi

    void retranslateUi(QWidget *storage)
    {
        storage->setWindowTitle(QApplication::translate("storage", "Form", 0));
        label->setText(QApplication::translate("storage", "             \350\264\247\347\211\251\345\205\245\345\272\223\347\231\273\350\256\260", 0));
        pushButton->setText(QApplication::translate("storage", "\347\241\256\345\256\232", 0));
        pushButton_2->setText(QApplication::translate("storage", "\351\207\215\347\275\256", 0));
        pushButton_3->setText(QApplication::translate("storage", "\345\217\226\346\266\210", 0));
        label_2->setText(QApplication::translate("storage", "\350\256\242 \345\215\225 \345\217\267", 0));
        lineEdit_1->setInputMask(QString());
        lineEdit_1->setText(QString());
        label_3->setText(QApplication::translate("storage", "\344\272\247\345\223\201\345\220\215\347\247\260", 0));
        label_4->setText(QApplication::translate("storage", "\344\272\247\345\223\201\347\274\226\345\217\267", 0));
        label_5->setText(QApplication::translate("storage", "\346\240\207\347\255\276\347\274\226\345\217\267", 0));
        label_6->setText(QApplication::translate("storage", "\344\272\247\345\223\201\346\225\260\351\207\217", 0));
        label_7->setText(QApplication::translate("storage", "\344\273\223\345\272\223\347\274\226\345\217\267", 0));
        label_8->setText(QApplication::translate("storage", "\347\256\241 \347\220\206 \345\221\230", 0));
        label_9->setText(QApplication::translate("storage", "\345\205\245\345\272\223\346\227\266\351\227\264", 0));
        lineEdit_8->setText(QString());
        lineEdit_8->setPlaceholderText(QApplication::translate("storage", "NOW DATE", 0));
    } // retranslateUi

};

namespace Ui {
    class storage: public Ui_storage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGE_H
