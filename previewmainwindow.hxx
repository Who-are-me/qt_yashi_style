#ifndef PREVIEWMAINWINDOW_HXX
#define PREVIEWMAINWINDOW_HXX

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PreviewMainWindow; }
QT_END_NAMESPACE

class PreviewMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    PreviewMainWindow(QWidget *parent = nullptr);
    ~PreviewMainWindow();

private:
    Ui::PreviewMainWindow *ui;
};
#endif // PREVIEWMAINWINDOW_HXX
