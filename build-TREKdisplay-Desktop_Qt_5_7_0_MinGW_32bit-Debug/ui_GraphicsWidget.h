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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_22;
    QPushButton *pushButton_20;
    QSpacerItem *horizontalSpacer_6;
    QTableView *tableView_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_15;
    QPushButton *pushButton_19;
    QPushButton *pushButton_16;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_21;
    QPushButton *pushButton_23;
    QSpacerItem *horizontalSpacer_7;
    QTableWidget *tableWidget_4;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_10;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QTableView *tableView_5;
    QPushButton *pushButton_31;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_17;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_18;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_5;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_5;
    QComboBox *comboBox;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_30;
    QPushButton *pushButton_36;
    QSpacerItem *horizontalSpacer_5;
    QTableView *tableView_6;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_37;
    QPushButton *pushButton_38;
    QSpacerItem *horizontalSpacer_4;
    QTableView *tableView_4;
    QWidget *tab;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
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
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_28;
    QPushButton *pushButton_27;
    QWidget *page_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_26;
    QPushButton *pushButton_29;
    QPushButton *pushButton_32;
    QPushButton *pushButton_39;
    QWidget *page_5;
    QPushButton *pushButton_33;
    QWidget *page_7;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;

    void setupUi(QWidget *GraphicsWidget)
    {
        if (GraphicsWidget->objectName().isEmpty())
            GraphicsWidget->setObjectName(QStringLiteral("GraphicsWidget"));
        GraphicsWidget->resize(1277, 454);
        gridLayout_2 = new QGridLayout(GraphicsWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
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

        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_3->addItem(verticalSpacer_2, 2, 3, 1, 1);

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

        horizontalSpacer = new QSpacerItem(362, 46, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 2, 1);

        tableView_2 = new QTableView(tab_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout_3->addWidget(tableView_2, 3, 0, 1, 4);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_7 = new QGridLayout(tab_4);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_22 = new QPushButton(groupBox);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));

        gridLayout_4->addWidget(pushButton_22, 0, 1, 1, 1);

        pushButton_20 = new QPushButton(groupBox);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));

        gridLayout_4->addWidget(pushButton_20, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        tableView_3 = new QTableView(groupBox);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));

        gridLayout_4->addWidget(tableView_3, 1, 0, 1, 3);


        horizontalLayout_11->addWidget(groupBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_15 = new QPushButton(tab_4);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        verticalLayout_3->addWidget(pushButton_15);

        pushButton_19 = new QPushButton(tab_4);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        verticalLayout_3->addWidget(pushButton_19);

        pushButton_16 = new QPushButton(tab_4);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));

        verticalLayout_3->addWidget(pushButton_16);


        horizontalLayout_11->addLayout(verticalLayout_3);

        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButton_21 = new QPushButton(groupBox_2);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));

        gridLayout_5->addWidget(pushButton_21, 0, 2, 1, 1);

        pushButton_23 = new QPushButton(groupBox_2);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));

        gridLayout_5->addWidget(pushButton_23, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        tableWidget_4 = new QTableWidget(groupBox_2);
        if (tableWidget_4->columnCount() < 8)
            tableWidget_4->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));

        gridLayout_5->addWidget(tableWidget_4, 1, 0, 1, 3);


        horizontalLayout_11->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));

        horizontalLayout_12->addLayout(horizontalLayout_10);


        verticalLayout_4->addLayout(horizontalLayout_12);

        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton_24 = new QPushButton(groupBox_3);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));

        gridLayout_6->addWidget(pushButton_24, 1, 1, 1, 1);

        pushButton_25 = new QPushButton(groupBox_3);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));

        gridLayout_6->addWidget(pushButton_25, 1, 3, 1, 1);

        tableView_5 = new QTableView(groupBox_3);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));

        gridLayout_6->addWidget(tableView_5, 2, 0, 1, 4);

        pushButton_31 = new QPushButton(groupBox_3);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));

        gridLayout_6->addWidget(pushButton_31, 1, 2, 1, 1);


        verticalLayout_4->addWidget(groupBox_3);


        gridLayout_7->addLayout(verticalLayout_4, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 23));

        horizontalLayout_6->addWidget(label_3);

        lineEdit_3 = new QLineEdit(tab_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(137, 20));

        horizontalLayout_6->addWidget(lineEdit_3);

        pushButton_17 = new QPushButton(tab_4);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setMaximumSize(QSize(75, 23));

        horizontalLayout_6->addWidget(pushButton_17);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(60, 23));

        horizontalLayout_7->addWidget(label_4);

        lineEdit_4 = new QLineEdit(tab_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(137, 20));

        horizontalLayout_7->addWidget(lineEdit_4);

        pushButton_18 = new QPushButton(tab_4);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setMaximumSize(QSize(75, 23));

        horizontalLayout_7->addWidget(pushButton_18);


        verticalLayout_5->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_5);

        horizontalSpacer_3 = new QSpacerItem(848, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        gridLayout_7->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_8 = new QGridLayout(tab_5);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox_4 = new QGroupBox(tab_5);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_10 = new QGridLayout(groupBox_4);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_13->addWidget(label_5);

        comboBox = new QComboBox(groupBox_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_13->addWidget(comboBox);

        lineEdit_5 = new QLineEdit(groupBox_4);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_13->addWidget(lineEdit_5);

        pushButton_30 = new QPushButton(groupBox_4);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));

        horizontalLayout_13->addWidget(pushButton_30);

        pushButton_36 = new QPushButton(groupBox_4);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));

        horizontalLayout_13->addWidget(pushButton_36);


        gridLayout_10->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        tableView_6 = new QTableView(groupBox_4);
        tableView_6->setObjectName(QStringLiteral("tableView_6"));

        gridLayout_10->addWidget(tableView_6, 1, 0, 1, 2);


        gridLayout_8->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(tab_5);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_9 = new QGridLayout(groupBox_5);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_9->addWidget(label_6);

        comboBox_2 = new QComboBox(groupBox_5);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_9->addWidget(comboBox_2);

        lineEdit_6 = new QLineEdit(groupBox_5);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_9->addWidget(lineEdit_6);

        pushButton_37 = new QPushButton(groupBox_5);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));

        horizontalLayout_9->addWidget(pushButton_37);

        pushButton_38 = new QPushButton(groupBox_5);
        pushButton_38->setObjectName(QStringLiteral("pushButton_38"));

        horizontalLayout_9->addWidget(pushButton_38);


        gridLayout_9->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        tableView_4 = new QTableView(groupBox_5);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));

        gridLayout_9->addWidget(tableView_4, 1, 0, 1, 2);


        gridLayout_8->addWidget(groupBox_5, 1, 0, 1, 1);

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

        toolBox = new QToolBox(GraphicsWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(85, 343));
        toolBox->setMaximumSize(QSize(69, 343));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 85, 187));
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
        page_2->setGeometry(QRect(0, 0, 85, 187));
        toolBox->addItem(page_2, QString::fromUtf8("  \345\205\245\345\272\223\347\256\241\347\220\206"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 85, 187));
        layoutWidget1 = new QWidget(page_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 77, 54));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_28 = new QPushButton(layoutWidget1);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));

        verticalLayout_6->addWidget(pushButton_28);

        pushButton_27 = new QPushButton(layoutWidget1);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));

        verticalLayout_6->addWidget(pushButton_27);

        toolBox->addItem(page_3, QString::fromUtf8("  \345\207\272\345\272\223\347\256\241\347\220\206"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 85, 187));
        layoutWidget2 = new QWidget(page_4);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 10, 81, 112));
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_26 = new QPushButton(layoutWidget2);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));

        verticalLayout_7->addWidget(pushButton_26);

        pushButton_29 = new QPushButton(layoutWidget2);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));

        verticalLayout_7->addWidget(pushButton_29);

        pushButton_32 = new QPushButton(layoutWidget2);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));

        verticalLayout_7->addWidget(pushButton_32);

        pushButton_39 = new QPushButton(layoutWidget2);
        pushButton_39->setObjectName(QStringLiteral("pushButton_39"));

        verticalLayout_7->addWidget(pushButton_39);

        toolBox->addItem(page_4, QString::fromUtf8("  \345\212\250\346\200\201\347\233\230\347\202\271"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 85, 187));
        pushButton_33 = new QPushButton(page_5);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        pushButton_33->setGeometry(QRect(0, 10, 75, 23));
        toolBox->addItem(page_5, QString::fromUtf8("  \346\240\207\350\257\206\347\256\241\347\220\206"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 85, 187));
        layoutWidget3 = new QWidget(page_7);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 77, 54));
        verticalLayout_8 = new QVBoxLayout(layoutWidget3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_34 = new QPushButton(layoutWidget3);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));

        verticalLayout_8->addWidget(pushButton_34);

        pushButton_35 = new QPushButton(layoutWidget3);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));

        verticalLayout_8->addWidget(pushButton_35);

        toolBox->addItem(page_7, QString::fromUtf8("  \345\256\232\344\275\215\347\256\241\347\220\206"));

        gridLayout_2->addWidget(toolBox, 0, 0, 1, 1);


        retranslateUi(GraphicsWidget);
        QObject::connect(toolBox, SIGNAL(currentChanged(int)), tabWidget, SLOT(setCurrentIndex(int)));

        tabWidget->setCurrentIndex(3);
        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GraphicsWidget);
    } // setupUi

    void retranslateUi(QWidget *GraphicsWidget)
    {
        GraphicsWidget->setWindowTitle(QApplication::translate("GraphicsWidget", "Form", 0));
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
        groupBox->setTitle(QApplication::translate("GraphicsWidget", "\345\275\223\345\211\215\345\272\223\345\255\230", 0));
        pushButton_22->setText(QApplication::translate("GraphicsWidget", "\345\210\267\346\226\260", 0));
        pushButton_20->setText(QApplication::translate("GraphicsWidget", "\345\257\274\345\207\272", 0));
        pushButton_15->setText(QApplication::translate("GraphicsWidget", "\346\267\273\345\212\240 >>", 0));
        pushButton_19->setText(QApplication::translate("GraphicsWidget", "\345\256\214\346\210\220", 0));
        pushButton_16->setText(QApplication::translate("GraphicsWidget", "<< \347\247\273\351\231\244", 0));
        groupBox_2->setTitle(QApplication::translate("GraphicsWidget", "\345\275\223\345\211\215\345\207\272\345\272\223", 0));
        pushButton_21->setText(QApplication::translate("GraphicsWidget", "\345\257\274\345\207\272", 0));
        pushButton_23->setText(QApplication::translate("GraphicsWidget", "\351\207\215\347\275\256", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GraphicsWidget", "\350\256\242\345\215\225\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GraphicsWidget", "\344\272\247\345\223\201\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GraphicsWidget", "\344\272\247\345\223\201\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("GraphicsWidget", "\346\240\207\347\255\276\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("GraphicsWidget", "\345\207\272\345\272\223\346\225\260\351\207\217", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_4->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("GraphicsWidget", "\345\207\272\345\272\223\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_4->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("GraphicsWidget", "\344\273\223\345\272\223", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_4->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("GraphicsWidget", "\347\256\241\347\220\206\345\221\230", 0));
#ifndef QT_NO_WHATSTHIS
        tableWidget_4->setWhatsThis(QApplication::translate("GraphicsWidget", "<html><head/><body><p>v\350\247\204\345\210\222\345\261\200\350\247\204\345\210\222\345\261\200</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        groupBox_3->setTitle(QApplication::translate("GraphicsWidget", "\345\207\272\345\272\223\346\212\245\350\241\250", 0));
        pushButton_24->setText(QApplication::translate("GraphicsWidget", "\345\210\267\346\226\260", 0));
        pushButton_25->setText(QApplication::translate("GraphicsWidget", "\345\257\274\345\207\272", 0));
        pushButton_31->setText(QApplication::translate("GraphicsWidget", "\345\210\240\351\231\244\351\200\211\344\270\255", 0));
        label_3->setText(QApplication::translate("GraphicsWidget", "\345\207\272\345\272\223\345\215\225\345\217\267\357\274\232", 0));
        pushButton_17->setText(QApplication::translate("GraphicsWidget", "\351\207\215\347\275\256", 0));
        label_4->setText(QApplication::translate("GraphicsWidget", "\350\264\247\347\211\251\346\225\260\351\207\217\357\274\232", 0));
        pushButton_18->setText(QApplication::translate("GraphicsWidget", "\346\267\273\345\212\240", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("GraphicsWidget", "tab3", 0));
        groupBox_4->setTitle(QApplication::translate("GraphicsWidget", "\345\272\223\345\255\230\347\233\230\347\202\271", 0));
        label_5->setText(QApplication::translate("GraphicsWidget", "\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("GraphicsWidget", "\350\256\242\345\215\225\345\217\267", 0)
         << QApplication::translate("GraphicsWidget", "\344\272\247\345\223\201\345\220\215\347\247\260", 0)
         << QApplication::translate("GraphicsWidget", "\344\272\247\345\223\201\347\274\226\345\217\267", 0)
         << QApplication::translate("GraphicsWidget", "\346\240\207\347\255\276\347\274\226\345\217\267", 0)
         << QApplication::translate("GraphicsWidget", "\344\273\223\345\272\223", 0)
         << QApplication::translate("GraphicsWidget", "\347\256\241\347\220\206\345\221\230", 0)
         << QApplication::translate("GraphicsWidget", "\345\205\245\345\272\223\346\227\266\351\227\264", 0)
        );
        pushButton_30->setText(QApplication::translate("GraphicsWidget", "\346\237\245\350\257\242", 0));
        pushButton_36->setText(QApplication::translate("GraphicsWidget", "\345\205\250\351\203\250", 0));
        groupBox_5->setTitle(QApplication::translate("GraphicsWidget", "\345\207\272\345\272\223\347\233\230\347\202\271", 0));
        label_6->setText(QApplication::translate("GraphicsWidget", "\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("GraphicsWidget", "\350\256\242\345\215\225\345\217\267", 0)
         << QApplication::translate("GraphicsWidget", "\344\272\247\345\223\201\345\220\215\347\247\260", 0)
         << QApplication::translate("GraphicsWidget", "\344\272\247\345\223\201\347\274\226\345\217\267", 0)
         << QApplication::translate("GraphicsWidget", "\346\240\207\347\255\276\347\274\226\345\217\267", 0)
         << QApplication::translate("GraphicsWidget", "\345\207\272\345\272\223\346\227\266\351\227\264", 0)
         << QApplication::translate("GraphicsWidget", "\344\273\223\345\272\223", 0)
         << QApplication::translate("GraphicsWidget", "\347\256\241\347\220\206\345\221\230", 0)
        );
        pushButton_37->setText(QApplication::translate("GraphicsWidget", "\346\237\245\350\257\242", 0));
        pushButton_38->setText(QApplication::translate("GraphicsWidget", "\345\205\250\351\203\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("GraphicsWidget", "tab4", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GraphicsWidget", "tab5", 0));
        pushButton_6->setText(QApplication::translate("GraphicsWidget", "slect 2", 0));
        pushButton_4->setText(QApplication::translate("GraphicsWidget", "slect 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GraphicsWidget", "tab6", 0));
        pushButton->setText(QApplication::translate("GraphicsWidget", "Setting", 0));
        pushButton_2->setText(QApplication::translate("GraphicsWidget", "AnchorTable", 0));
        pushButton_3->setText(QApplication::translate("GraphicsWidget", "TagTable", 0));
        pushButton_5->setText(QApplication::translate("GraphicsWidget", "CloseAll", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("GraphicsWidget", "  \345\205\250\345\261\200\345\234\260\345\233\276", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("GraphicsWidget", "  \345\205\245\345\272\223\347\256\241\347\220\206", 0));
        pushButton_28->setText(QApplication::translate("GraphicsWidget", "\345\207\272\345\272\223\346\223\215\344\275\234", 0));
        pushButton_27->setText(QApplication::translate("GraphicsWidget", "\345\207\272\345\272\223\346\212\245\350\241\250", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("GraphicsWidget", "  \345\207\272\345\272\223\347\256\241\347\220\206", 0));
        pushButton_26->setText(QApplication::translate("GraphicsWidget", "\345\272\223\345\255\230\347\233\230\347\202\271", 0));
        pushButton_29->setText(QApplication::translate("GraphicsWidget", "\345\207\272\345\272\223\347\233\230\347\202\271", 0));
        pushButton_32->setText(QApplication::translate("GraphicsWidget", "\347\247\273\345\272\223\347\256\241\347\220\206", 0));
        pushButton_39->setText(QApplication::translate("GraphicsWidget", "\345\205\250\351\203\250\346\230\276\347\244\272", 0));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("GraphicsWidget", "  \345\212\250\346\200\201\347\233\230\347\202\271", 0));
        pushButton_33->setText(QApplication::translate("GraphicsWidget", "\345\256\232\344\275\215\346\240\207\347\255\276", 0));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("GraphicsWidget", "  \346\240\207\350\257\206\347\256\241\347\220\206", 0));
        pushButton_34->setText(QApplication::translate("GraphicsWidget", "\350\264\247\347\211\251\345\256\232\344\275\215", 0));
        pushButton_35->setText(QApplication::translate("GraphicsWidget", "\344\272\272\345\221\230\345\256\232\344\275\215", 0));
        toolBox->setItemText(toolBox->indexOf(page_7), QApplication::translate("GraphicsWidget", "  \345\256\232\344\275\215\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class GraphicsWidget: public Ui_GraphicsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICSWIDGET_H
