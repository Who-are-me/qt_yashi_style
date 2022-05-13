#include <QLineEdit>

#include "previewmainwindow.hxx"
#include "./ui_previewmainwindow.h"


PreviewMainWindow::PreviewMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreviewMainWindow)
{
    ui->setupUi(this);
    QLineEdit *le;

    le = new QLineEdit();
    le->setMaximumWidth(150);

    ui->toolBar->addWidget(le);

    ui->statusbar->showMessage("Text in status bar");
}

PreviewMainWindow::~PreviewMainWindow() {
    delete ui;
}

