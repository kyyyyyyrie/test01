#include "loada.h"
#include "ui_loada.h"
#include<QString>
#include<nodetot.h>
#include<manager.h>
#include<add.h>
#include<modify.h>
#include<dele.h>
#include<modedge.h>
extern nodetot total;
loada::loada(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::loada)
{
    ui->setupUi(this);
    setWindowTitle("管理员界面");
    setWindowIcon(QIcon("E:\\QTcode\\test02\\tupian\\th.jpg"));
}

loada::~loada()
{
    delete ui;
}

void loada::on_add_clicked()
{
    QString name=ui->name->text();
    if(total.isExistName(name)){
        ui->tishi->setText("用户名已存在");
    }
    else{
        QString pass=ui->pass->text();
        QString pass2=ui->pass2->text();
        if(pass!=pass2){
            ui->tishi->setText("重复密码与原密码不同");
        }
        else{
            ui->tishi->setText("添加成功");
            manager tmp;
            tmp.name=name;
            tmp.pass=pass;
            total.key[++total.cntkey]=tmp;
            ui->name->setText("");
            ui->pass->setText("");
            ui->pass2->setText("");
        }
    }
}


void loada::on_addnode_clicked()
{
    ad.show();
}


void loada::on_modify_clicked()
{
    mod.show();
}


void loada::on_delete_2_clicked()
{
    del.show();
}


void loada::on_modedge_clicked()
{
    edg.show();
}

