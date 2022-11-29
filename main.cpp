#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QString>


int main(int argc, char *argv[]) {
    QApplication application(argc, argv);
    MainWindow w_main;

    // TODO edit absolute path to file

#ifdef Q_OS_LINUX
    QFile file_theme("/home/forever/Projects/Qt/demo_themes/dev.qss");
#else
    QFile file_theme("/Users/vasil.storchak/Projects/Qt/demo_themes/dev.qss");
#endif

    file_theme.open(QFile::ReadOnly);
    QString style_sheet = QLatin1String(file_theme.readAll());

    application.setStyleSheet(style_sheet);
    w_main.show();

    int status_code = application.exec();

    return status_code;
}
