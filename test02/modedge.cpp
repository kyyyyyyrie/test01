#include "modedge.h"
#include "ui_modedge.h"
#include<QString>
#include<nodetot.h>
#include<QDebug>
#include<Edge.h>
#include<mainwindow.h>
extern nodetot total;
modEdge::modEdge(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::modEdge)
{
    ui->setupUi(this);
    setWindowTitle("修改节点");
    setWindowIcon(QIcon("E:\\QTcode\\test02\\tupian\\th.jpg"));
    for(int i=1;i<=total.cntnode;++i){
        ui->start->addItem(total.node[i].name);
    }
    for(int i=1;i<=total.cntnode;++i){
        ui->end->addItem(total.node[i].name);
    }
    for(int i=1;i<=total.cntnode;++i){
        ui->start1->addItem(total.node[i].name);
    }
    for(int i=1;i<=total.cntnode;++i){
        ui->end1->addItem(total.node[i].name);
    }
}

modEdge::~modEdge()
{
    delete ui;
}

void modEdge::on_mode_clicked()
{
    QString st=ui->start->currentText();
    QString en=ui->end->currentText();
    int idxs=total.searchid(st);
    int idxe=total.searchid(en);
    bool f=0;
    for(int i=0;i<total.edge[idxs].size();++i){
        if(total.edge[idxs][i].end==idxe){
            f=1;
            if(ui->type->currentText()=="长度"){
                QString s=ui->res->text();
                if(s==""){
                    ui->tishi->setText("输入为空");
                    return;
                }
                int len=s.toInt();
                total.edge[idxs][i].length=len;
                for(int j=0;j<total.edge[idxe].size();++j){
                    if(total.edge[idxe][j].end==idxs){
                        total.edge[idxe][j].length=len;
                    }
                }
                ui->tishi->setText("修改成功");
                ui->res->setText("");
            }
            else{
                QString s=ui->res->text();
                if(s==""){
                    ui->tishi->setText("输入为空");
                    return;
                }
                if(s=="人行道"){
                    total.edge[idxs][i].type=0;
                    for(int j=0;j<total.edge[idxe].size();++j){
                        if(total.edge[idxe][j].end==idxs){
                            total.edge[idxe][j].type=0;
                        }
                    }
                    ui->tishi->setText("修改成功");
                    ui->res->setText("");
                }
                else if(s=="机动车道"){
                    total.edge[idxs][i].type=1;
                    for(int j=0;j<total.edge[idxe].size();++j){
                        if(total.edge[idxe][j].end==idxs){
                            total.edge[idxe][j].type=1;
                        }
                    }
                    ui->tishi->setText("修改成功");
                    ui->res->setText("");
                }
                else{
                    ui->tishi->setText("类型错误");
                    ui->res->setText("");
                    return;
                }
            }
        }
    }
    if(!f){
        ui->tishi->setText("未找到道路");
        ui->res->setText("");
        return;
    }
}


void modEdge::on_ADD_clicked()
{
    QString st=ui->start1->currentText();
    QString en=ui->end1->currentText();
    int idxs=total.searchid(st);
    int idxe=total.searchid(en);
    for(int i=0;i<total.edge[idxs].size();++i){
        if(total.edge[idxs][i].end==idxe){
            ui->tishi1->setText("已有道路");
            return;
        }
    }
    int len=ui->len->text().toInt();
    if(len<=0){
        ui->tishi1->setText("长度错误");
        ui->len->setText("");
        return;
    }
    Edge tmp;
    tmp.length=len;
    QString typ=ui->type1->currentText();
    if(typ=="人行道"){
        tmp.type=0;
    }
    else{
        tmp.type=1;
    }
    tmp.end=idxe;
    total.edge[idxs].push_back(tmp);
}

