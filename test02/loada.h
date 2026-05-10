#ifndef LOADA_H
#define LOADA_H
#include<add.h>
#include<modify.h>
#include<dele.h>
#include <QWidget>
#include<nodetot.h>
#include<modedge.h>
extern nodetot total;
namespace Ui {
class loada;
}

class loada : public QWidget
{
    Q_OBJECT

public:
    explicit loada(QWidget *parent = nullptr);
    ~loada();

private slots:
    void on_add_clicked();

    void on_addnode_clicked();

    void on_modify_clicked();

    void on_delete_2_clicked();

    void on_modedge_clicked();

private:
    add ad;
    modEdge edg;
    modify mod;
    dele del;
    Ui::loada *ui;
};

#endif // LOADA_H
