#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStringListModel>
#include<loada.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void initedge();
    ~MainWindow();

private slots:
    void on_checkload_clicked();

    void on_search_clicked();

    void on_All_clicked();

    void on_pushButton_clicked();

private:
    QStringListModel* model=NULL;
    QStringListModel* model1=NULL;
    loada loadw;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
