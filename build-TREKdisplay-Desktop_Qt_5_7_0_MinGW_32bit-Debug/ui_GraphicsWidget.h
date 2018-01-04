/********************************************************************************
** Form generated from reading UI file 'GraphicsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICSWIDGET_H
#define UI_GRAPHICSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GraphicsView.h"
#include "ViewSettingsWidget.h"

QT_BEGIN_NAMESPACE

class Ui_GraphicsWidget
{
public:
    QGridLayout *gridLayout_2;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *page_7;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout;
    QDockWidget *dockWidget;
    ViewSettingsWidget *dockWidgetContents;
    GraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QTableWidget *anchorTable;
    QTableWidget *tagTable;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_7;
    QPushButton *pushButton_13;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_14;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QSpacerItem *verticalSpacer_2;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;

    void setupUi(QWidget *GraphicsWidget)
    {
        if (GraphicsWidget->objectName().isEmpty())
            GraphicsWidget->setObjectName(QStringLiteral("GraphicsWidget"));
        GraphicsWidget->resize(1277, 377);
        gridLayout_2 = new QGridLayout(GraphicsWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        toolBox = new QToolBox(GraphicsWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(85, 343));
        toolBox->setMaximumSize(QSize(69, 343));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 85, 213));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 77, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        toolBox->addItem(page, QString::fromUtf8("  \345\205\250\345\261\200\345\234\260\345\233\276"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 85, 213));
        toolBox->addItem(page_2, QString::fromUtf8("  \345\205\245\345\272\223\347\256\241\347\220\206"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 85, 213));
        toolBox->addItem(page_3, QString::fromUtf8("  \345\207\272\345\272\223\347\256\241\347\220\206"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 85, 213));
        toolBox->addItem(page_4, QString::fromUtf8("  \345\212\250\346\200\201\347\233\230\347\202\271"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 85, 213));
        toolBox->addItem(page_7, QString::fromUtf8("  \350\275\250\350\277\271\350\267\237\350\270\252"));

        gridLayout_2->addWidget(toolBox, 0, 0, 1, 1);

        tabWidget = new QTabWidget(GraphicsWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMaximumSize(QSize(12777215, 16777215));
        tabWidget->setMouseTracking(false);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(true);
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        gridLayout = new QGridLayout(tab1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dockWidget = new QDockWidget(tab1);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMaximumSize(QSize(350, 800));
        dockWidgetContents = new ViewSettingsWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);

        gridLayout->addWidget(dockWidget, 1, 1, 1, 1);

        graphicsView = new GraphicsView(tab1);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        anchorTable = new QTableWidget(tab1);
        if (anchorTable->columnCount() < 12)
            anchorTable->setColumnCount(12);
        if (anchorTable->rowCount() < 4)
            anchorTable->setRowCount(4);
        anchorTable->setObjectName(QStringLiteral("anchorTable"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(anchorTable->sizePolicy().hasHeightForWidth());
        anchorTable->setSizePolicy(sizePolicy);
        anchorTable->setMinimumSize(QSize(370, 112));
        anchorTable->setMaximumSize(QSize(350, 16777215));
        QFont font;
        font.setPointSize(8);
        anchorTable->setFont(font);
        anchorTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        anchorTable->setAlternatingRowColors(true);
        anchorTable->setRowCount(4);
        anchorTable->setColumnCount(12);
        anchorTable->horizontalHeader()->setDefaultSectionSize(70);
        anchorTable->horizontalHeader()->setMinimumSectionSize(70);
        anchorTable->horizontalHeader()->setStretchLastSection(false);
        anchorTable->verticalHeader()->setVisible(false);
        anchorTable->verticalHeader()->setDefaultSectionSize(18);
        anchorTable->verticalHeader()->setHighlightSections(true);
        anchorTable->verticalHeader()->setMinimumSectionSize(18);

        horizontalLayout->addWidget(anchorTable);

        tagTable = new QTableWidget(tab1);
        if (tagTable->columnCount() < 10)
            tagTable->setColumnCount(10);
        tagTable->setObjectName(QStringLiteral("tagTable"));
        sizePolicy.setHeightForWidth(tagTable->sizePolicy().hasHeightForWidth());
        tagTable->setSizePolicy(sizePolicy);
        tagTable->setMinimumSize(QSize(660, 112));
        tagTable->setMaximumSize(QSize(700, 16777215));
        tagTable->setFont(font);
        tagTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tagTable->setAlternatingRowColors(true);
        tagTable->setRowCount(0);
        tagTable->setColumnCount(10);
        tagTable->horizontalHeader()->setDefaultSectionSize(70);
        tagTable->horizontalHeader()->setMinimumSectionSize(70);
        tagTable->horizontalHeader()->setStretchLastSection(false);
        tagTable->verticalHeader()->setDefaultSectionSize(18);
        tagTable->verticalHeader()->setMinimumSectionSize(18);

        horizontalLayout->addWidget(tagTable);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab1, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(134, 20));

        horizontalLayout_3->addWidget(lineEdit);

        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_13 = new QPushButton(tab_3);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_3->addWidget(pushButton_13);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(84, 16777215));

        horizontalLayout_4->addWidget(label_2);

        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(191, 20));

        horizontalLayout_4->addWidget(lineEdit_2);

        pushButton_14 = new QPushButton(tab_3);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_4->addWidget(pushButton_14);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 3, 1);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_3->addItem(verticalSpacer_3, 0, 3, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_5->addWidget(pushButton_8);

        pushButton_11 = new QPushButton(tab_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        horizontalLayout_5->addWidget(pushButton_11);

        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        horizontalLayout_5->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_5->addWidget(pushButton_9);

        pushButton_12 = new QPushButton(tab_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_5->addWidget(pushButton_12);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 2, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_3->addItem(verticalSpacer_2, 2, 3, 1, 1);

        tableView_2 = new QTableView(tab_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout_3->addWidget(tableView_2, 3, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(362, 46, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 2, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout_2->addWidget(tableView);

        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 1, 1, 1);


        retranslateUi(GraphicsWidget);
        QObject::connect(toolBox, SIGNAL(currentChanged(int)), tabWidget, SLOT(setCurrentIndex(int)));

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GraphicsWidget);
    } // setupUi

    void retranslateUi(QWidget *GraphicsWidget)
    {
        GraphicsWidget->setWindowTitle(QApplication::translate("GraphicsWidget", "Form", 0));
        pushButton->setText(QApplication::translate("GraphicsWidget", "Setting", 0));
        pushButton_2->setText(QApplication::translate("GraphicsWidget", "AnchorTable", 0));
        pushButton_3->setText(QApplication::translate("GraphicsWidget", "TagTable", 0));
        pushButton_5->setText(QApplication::translate("GraphicsWidget", "CloseAll", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("GraphicsWidget", "  \345\205\250\345\261\200\345\234\260\345\233\276", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("GraphicsWidget", "  \345\205\245\345\272\223\347\256\241\347\220\206", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("GraphicsWidget", "  \345\207\272\345\272\223\347\256\241\347\220\206", 0));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("GraphicsWidget", "  \345\212\250\346\200\201\347\233\230\347\202\271", 0));
        toolBox->setItemText(toolBox->indexOf(page_7), QApplication::translate("GraphicsWidget", "  \350\275\250\350\277\271\350\267\237\350\270\252", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("GraphicsWidget", "tab1", 0));
        label->setText(QApplication::translate("GraphicsWidget", "\345\205\245\345\272\223\345\215\225\345\217\267\357\274\232", 0));
        pushButton_7->setText(QApplication::translate("GraphicsWidget", "\346\237\245\350\257\242", 0));
        pushButton_13->setText(QApplication::translate("GraphicsWidget", "\345\205\250\351\203\250", 0));
        label_2->setText(QApplication::translate("GraphicsWidget", "\345\205\266\344\273\226\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232", 0));
        pushButton_14->setText(QApplication::translate("GraphicsWidget", "\346\237\245\350\257\242", 0));
        pushButton_8->setText(QApplication::translate("GraphicsWidget", "\346\226\260\345\242\236", 0));
        pushButton_11->setText(QApplication::translate("GraphicsWidget", "\347\274\226\350\276\221", 0));
        pushButton_10->setText(QApplication::translate("GraphicsWidget", "\345\210\240\351\231\244", 0));
        pushButton_9->setText(QApplication::translate("GraphicsWidget", "\345\210\267\346\226\260", 0));
        pushButton_12->setText(QApplication::translate("GraphicsWidget", "\345\257\274\345\207\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("GraphicsWidget", "tab2", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("GraphicsWidget", "tab3", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("GraphicsWidget", "tab4", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GraphicsWidget", "tab5", 0));
        pushButton_6->setText(QApplication::translate("GraphicsWidget", "slect 2", 0));
        pushButton_4->setText(QApplication::translate("GraphicsWidget", "slect 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GraphicsWidget", "tab6", 0));
    } // retranslateUi

};

namespace Ui {
    class GraphicsWidget: public Ui_GraphicsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICSWIDGET_H
