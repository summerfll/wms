/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <form.h>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QLineEdit *lineEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QCheckBox *checkBox;
    QWidget *tab_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QWidget *page_2;
    QPushButton *pushButton_7;
    QWidget *page_3;
    QWidget *page_4;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName(QStringLiteral("Form2"));
        Form2->resize(687, 415);
        label = new QLabel(Form2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 60, 54, 12));
        spinBox = new QSpinBox(Form2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(570, 160, 42, 22));
        lineEdit = new QLineEdit(Form2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(450, 90, 113, 20));
        tabWidget = new QTabWidget(Form2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(170, 210, 391, 151));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 40, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(50, 50, 71, 16));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 50, 75, 23));
        tabWidget->addTab(tab_3, QString());
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 50, 75, 23));
        toolBox = new QToolBox(Form2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(20, 70, 101, 211));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 101, 107));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        toolBox->addItem(page, QStringLiteral("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 101, 107));
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 0, 83, 23));
        toolBox->addItem(page_2, QStringLiteral("Page 2"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        toolBox->addItem(page_3, QString::fromUtf8("\351\241\265"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        toolBox->addItem(page_4, QString::fromUtf8("\351\241\265"));

        retranslateUi(Form2);
        QObject::connect(spinBox, SIGNAL(editingFinished()), lineEdit, SLOT(clear()));
        QObject::connect(pushButton, SIGNAL(clicked()), label, SLOT(clear()));
        QObject::connect(toolBox, SIGNAL(currentChanged(int)), tabWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(pushButton_5, SIGNAL(clicked()), spinBox, SLOT(stepUp()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), spinBox, SLOT(stepDown()));

        tabWidget->setCurrentIndex(3);
        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QApplication::translate("Form2", "Form", 0));
        label->setText(QApplication::translate("Form2", "\345\255\220\347\252\227\345\217\2432", 0));
        pushButton_2->setText(QApplication::translate("Form2", "1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form2", "Tab 1", 0));
        checkBox->setText(QApplication::translate("Form2", "CheckBox", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form2", "Tab 2", 0));
        pushButton_3->setText(QApplication::translate("Form2", "3", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Form2", "\351\241\265", 0));
        pushButton_4->setText(QApplication::translate("Form2", "4", 0));
        pushButton_5->setText(QApplication::translate("Form2", "PushButton", 0));
        pushButton_6->setText(QApplication::translate("Form2", "PushButton", 0));
        pushButton->setText(QApplication::translate("Form2", "PushButton", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("Form2", "Page 1", 0));
        pushButton_7->setText(QApplication::translate("Form2", "PushButton", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("Form2", "Page 2", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("Form2", "\351\241\265", 0));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("Form2", "\351\241\265", 0));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
