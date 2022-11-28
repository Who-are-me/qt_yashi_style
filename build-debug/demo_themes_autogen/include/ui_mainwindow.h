/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QUndoView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_file;
    QAction *actionOpen_file;
    QAction *actionOpen_folder;
    QAction *actionSettings;
    QAction *actionClose_file;
    QAction *actionQuit;
    QAction *actionSettings_2;
    QAction *actionAbout_CuteThemes;
    QAction *actionMaximize;
    QAction *actionMinimize;
    QAction *actionFull_screen;
    QAction *actionForce_Quit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tw_main;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_2;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_2;
    QToolButton *toolButton_2;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_11;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QListView *listView;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QTableView *tableView;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_9;
    QListWidget *listWidget;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_10;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QColumnView *columnView;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_8;
    QUndoView *undoView;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QTreeView *treeView;
    QWidget *tab_5;
    QWidget *tab_6;
    QMenuBar *menubar;
    QMenu *menuFIle;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuSetup;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(898, 619);
        actionNew_file = new QAction(MainWindow);
        actionNew_file->setObjectName(QString::fromUtf8("actionNew_file"));
        actionOpen_file = new QAction(MainWindow);
        actionOpen_file->setObjectName(QString::fromUtf8("actionOpen_file"));
        actionOpen_folder = new QAction(MainWindow);
        actionOpen_folder->setObjectName(QString::fromUtf8("actionOpen_folder"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionClose_file = new QAction(MainWindow);
        actionClose_file->setObjectName(QString::fromUtf8("actionClose_file"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSettings_2 = new QAction(MainWindow);
        actionSettings_2->setObjectName(QString::fromUtf8("actionSettings_2"));
        actionAbout_CuteThemes = new QAction(MainWindow);
        actionAbout_CuteThemes->setObjectName(QString::fromUtf8("actionAbout_CuteThemes"));
        actionMaximize = new QAction(MainWindow);
        actionMaximize->setObjectName(QString::fromUtf8("actionMaximize"));
        actionMinimize = new QAction(MainWindow);
        actionMinimize->setObjectName(QString::fromUtf8("actionMinimize"));
        actionFull_screen = new QAction(MainWindow);
        actionFull_screen->setObjectName(QString::fromUtf8("actionFull_screen"));
        actionForce_Quit = new QAction(MainWindow);
        actionForce_Quit->setObjectName(QString::fromUtf8("actionForce_Quit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tw_main = new QTabWidget(centralwidget);
        tw_main->setObjectName(QString::fromUtf8("tw_main"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        verticalLayout->addWidget(toolButton);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setEnabled(false);

        verticalLayout_2->addWidget(radioButton_2);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setEnabled(false);

        verticalLayout_2->addWidget(checkBox_2);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);

        verticalLayout_2->addWidget(pushButton_2);

        toolButton_2 = new QToolButton(groupBox_2);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setEnabled(false);

        verticalLayout_2->addWidget(toolButton_2);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        tw_main->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tw_main->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tw_main->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_10 = new QGroupBox(tab_4);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_11 = new QGridLayout(groupBox_10);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        tableWidget = new QTableWidget(groupBox_10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_11->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_10, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        listView = new QListView(groupBox_3);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout_4->addWidget(listView, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 0, 1, 1, 1);

        groupBox_5 = new QGroupBox(tab_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tableView = new QTableView(groupBox_5);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_6->addWidget(tableView, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_5, 0, 3, 1, 1);

        groupBox_8 = new QGroupBox(tab_4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_9 = new QGridLayout(groupBox_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        listWidget = new QListWidget(groupBox_8);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_9->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_8, 1, 0, 1, 2);

        groupBox_9 = new QGroupBox(tab_4);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_10 = new QGridLayout(groupBox_9);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        treeWidget = new QTreeWidget(groupBox_9);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout_10->addWidget(treeWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_9, 2, 0, 1, 2);

        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        columnView = new QColumnView(groupBox_6);
        columnView->setObjectName(QString::fromUtf8("columnView"));

        gridLayout_7->addWidget(columnView, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_6, 1, 3, 2, 1);

        groupBox_7 = new QGroupBox(tab_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_8 = new QGridLayout(groupBox_7);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        undoView = new QUndoView(groupBox_7);
        undoView->setObjectName(QString::fromUtf8("undoView"));

        gridLayout_8->addWidget(undoView, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_7, 2, 2, 1, 1);

        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        treeView = new QTreeView(groupBox_4);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout_5->addWidget(treeView, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 0, 2, 2, 1);

        tw_main->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tw_main->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tw_main->addTab(tab_6, QString());

        gridLayout->addWidget(tw_main, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 898, 24));
        menuFIle = new QMenu(menubar);
        menuFIle->setObjectName(QString::fromUtf8("menuFIle"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuSetup = new QMenu(menubar);
        menuSetup->setObjectName(QString::fromUtf8("menuSetup"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFIle->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSetup->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFIle->addAction(actionNew_file);
        menuFIle->addAction(actionOpen_file);
        menuFIle->addAction(actionOpen_folder);
        menuFIle->addSeparator();
        menuFIle->addAction(actionClose_file);
        menuFIle->addSeparator();
        menuFIle->addAction(actionQuit);
        menuEdit->addAction(actionSettings_2);
        menuWindow->addAction(actionMaximize);
        menuWindow->addAction(actionMinimize);
        menuWindow->addAction(actionFull_screen);
        menuWindow->addAction(actionForce_Quit);
        menuHelp->addAction(actionAbout_CuteThemes);
        toolBar->addAction(actionForce_Quit);
        toolBar->addSeparator();
        toolBar->addAction(actionNew_file);
        toolBar->addAction(actionOpen_file);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen_folder);
        toolBar->addSeparator();
        toolBar->addAction(actionSettings);
        toolBar->addAction(actionFull_screen);

        retranslateUi(MainWindow);

        tw_main->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_file->setText(QCoreApplication::translate("MainWindow", "New file", nullptr));
        actionOpen_file->setText(QCoreApplication::translate("MainWindow", "Open file", nullptr));
        actionOpen_folder->setText(QCoreApplication::translate("MainWindow", "Open folder", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionClose_file->setText(QCoreApplication::translate("MainWindow", "Close file", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionSettings_2->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionAbout_CuteThemes->setText(QCoreApplication::translate("MainWindow", "About CuteThemes", nullptr));
        actionMaximize->setText(QCoreApplication::translate("MainWindow", "Maximize", nullptr));
        actionMinimize->setText(QCoreApplication::translate("MainWindow", "Minimize", nullptr));
        actionFull_screen->setText(QCoreApplication::translate("MainWindow", "Full screen", nullptr));
        actionForce_Quit->setText(QCoreApplication::translate("MainWindow", "Force Quit", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Active", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Unactive", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tw_main->setTabText(tw_main->indexOf(tab), QCoreApplication::translate("MainWindow", "Push buttons", nullptr));
        tw_main->setTabText(tw_main->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tool buttons", nullptr));
        tw_main->setTabText(tw_main->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Radio/Check buttons", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "Table Widget", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "List View", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Table View", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "List Widget", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "Tree Widget", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Column View", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Undo View", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Tree View", nullptr));
        tw_main->setTabText(tw_main->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Combos/Spins/Inputs", nullptr));
        tw_main->setTabText(tw_main->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Sliders/Scroll/Progress/Dial", nullptr));
        tw_main->setTabText(tw_main->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Containers", nullptr));
        menuFIle->setTitle(QCoreApplication::translate("MainWindow", "FIle", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuSetup->setTitle(QCoreApplication::translate("MainWindow", "Setup", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "Window", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
