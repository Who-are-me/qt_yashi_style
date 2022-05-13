#include <QApplication>
#include <QFile>

#include "previewmainwindow.hxx"


// FIXME handles images
// FIXME make cool bottom filed in resize
int main(int argc, char *argv[]) {
    QApplication 		app(argc, argv);
    PreviewMainWindow 	w_preview;
    QFile 				file("style/Yashi.qss");
    file.open(QFile::ReadOnly);
    QString 			style_sheet { QLatin1String(file.readAll()) };

    w_preview.setStyleSheet(style_sheet);
    w_preview.show();

    return app.exec();
}
