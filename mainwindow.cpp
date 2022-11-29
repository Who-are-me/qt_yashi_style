#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QStringList>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList list = (QStringList() << "red" << "yellow" << "blue");
    ui->comboBox->addItems(list);
}


MainWindow::~MainWindow() {
    delete ui;
}
