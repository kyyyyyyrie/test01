#include "add.h"
#include "ui_add.h"
#include<QString>
#include<nodetot.h>
#include<QDebug>
#include<Node.h>
#include<Edge.h>
extern nodetot total;
add::add(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::add)
{
    ui->setupUi(this);
    setWindowTitle("添加节点");
    setWindowIcon(QIcon("E:\\QTcode\\test02\\tupian\\th.jpg"));
}

add::~add()
{
    delete ui;
}

void add::on_addp_clicked()
{
    QString name1=ui->addm->text();
    if(!total.searchid(name1)){
        ui->tishi->setText("地点不存在");
        return;
    }
    int idx=total.searchid(name1);
    QString fang=ui->addf->text();
    int len1=ui->addlen->text().toInt();
    if(len1<=0){
        ui->tishi1->setText("距离异常，请重新输入");
        return;
    }
    qDebug()<<total.node[idx].name<<" "<<total.node[idx].x<<" "<<total.node[idx].y;
    int dx=0,dy=0;
    if(fang=="东"){
        dx=total.node[idx].x+len1;
        dy=total.node[idx].y;
    }
    else if(fang=="南"){
        dy=total.node[idx].y+len1;
        dx=total.node[idx].x;
    }
    else if(fang=="西"){
        dx=total.node[idx].x-len1;
        dy=total.node[idx].y;
    }
    else if(fang=="北"){
        dy=total.node[idx].y-len1;
        dx=total.node[idx].x;
    }
    else{
        ui->tishi1->setText("方向异常，请输入东南西北中的一个");
        return;
    }
    if(dx<0||dx>500||dy<0||dy>200){
        ui->tishi1->setText("距离异常，请重新输入");
        return;
    }
    for(int i=1;i<=total.cntnode-1;++i){
        Node tmp=total.node[i];
        if(dx==tmp.x&&dy==tmp.y){
            //qDebug()<<tmp.name<<" "<<dx<<" "<<dy;
            ui->tishi1->setText("该位置已有建筑");
            return;
        }
    }
    total.node[total.cntnode].x=dx;
    total.node[total.cntnode].y=dy;
    Edge tmp;
    tmp.end=idx;
    tmp.length=len1;
    if(ui->peo->isChecked()){
        tmp.type=0;
    }
    else{
        tmp.type=1;
    }
    total.edge[total.cntnode].push_back(tmp);
    tmp.end=total.cntnode;
    total.edge[idx].push_back(tmp);
    ui->addm->setText("");
    ui->addf->setText("");
    ui->addlen->setText("");
}


void add::on_addname_clicked()
{
    QString name1=ui->name->text();
    if(total.searchid(name1)){
        ui->tishi->setText("名称已存在");
        return;
    }
    else{
        ++total.cntnode;
        total.node[total.cntnode].name=name1;
        for(int i=1;i<=10005;++i){
            if(!total.isId[i]){
                total.node[total.cntnode].id=i;
                ++total.isId[i];
                break;
            }
        }
        total.node[total.cntnode].x=0;
        total.node[total.cntnode].y=0;
        total.node[total.cntnode].brief="";

        ui->tishi->setText("添加成功");
        ui->name->setText("");
    }
}


void add::on_pushButton_clicked()
{
    QString jj1=ui->jj->text();
    total.node[total.cntnode].brief=jj1;
    qDebug()<<total.cntnode;
    ui->tishi2->setText("");
    ui->tishi2->setText("添加成功");qDebug()<<total.cntnode;
}

