#include "modify.h"
#include "ui_modify.h"
#include<QString>
#include<nodetot.h>
#include<QDebug>
#include<mainwindow.h>
extern nodetot total;
modify::modify(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::modify)
{
    ui->setupUi(this);
    setWindowTitle("修改节点");
    setWindowIcon(QIcon("E:\\QTcode\\test02\\tupian\\th.jpg"));
}

modify::~modify()
{
    delete ui;
}

void modify::on_modi_clicked()
{
    QString s=ui->id->text();
    int idx=s.toInt();
    bool f=0;
    for(int i=1;i<=total.cntnode;++i){
        if(total.node[i].id==idx){
            f=1;
            break;
        }
    }
    if(!f){
        ui->tishi->setText("未找到ID");
    }
    else{
        QString tmp=ui->res->text();
        if(ui->modname->isChecked()){
            bool f1=0;
            for(int i=1;i<=total.cntnode;++i){
                if(total.node[i].name==tmp){
                    f1=1;
                    break;
                }
            }
            if(f1){
                ui->tishi->setText("名称重复");
            }
            else{
                ui->tishi->setText("修改成功");
                total.node[idx].name=tmp;
            }
        }
        else if(ui->modid->isChecked()){
            bool f1=0;
            int dx=tmp.toInt();
            for(int i=1;i<=total.cntnode;++i){
                if(total.node[i].id==dx){
                    f1=1;
                    break;
                }
            }
            if(f1){
                ui->tishi->setText("ID重复");
            }
            else{
                --total.isId[total.node[idx].id];
                ui->tishi->setText("修改成功");
                total.node[idx].id=dx;
                ++total.isId[dx];
            }
        }
        else{
            QString tmp=ui->res->text();
            ui->tishi->setText("修改成功");
            total.node[idx].name=tmp;
        }
    }
}

