#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include<Node.h>
#include<QPushButton>
#include<QDebug>
#include<QString>
#include<nodetot.h>
#include<QStringList>
#include<QStringListModel>
using namespace std;
extern nodetot total;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("校园导游系统");
    setWindowIcon(QIcon("E:\\QTcode\\test02\\tupian\\th.jpg"));
    // ui->changeman->setTabText(0,"管理员操作");
    // ui->changeman->setTabText(1,"用户操作");
    ui->target->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->Allo->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_checkload_clicked()
{
    ui->load->setText("");
    ui->len->setText("");
    QString s=ui->start->text();
    QString e=ui->end->text();
    if(!total.searchid(s)||!total.searchid(e)){
        if(!total.searchid(s)){
            ui->load->setText("起点名称错误");
        }
        if(!total.searchid(e)){
            ui->len->setText("终点名称错误");
        }
        return;
    }
    bool f=ui->car->isChecked();
    //qDebug()<<s<<e;
    int idxs=total.searchid(s);
    int idxe=total.searchid(e);
    int totlen;
    totlen=total.minload(idxs,idxe,!f);
    int idx=1;
    QString load;
    while(total.ans[idxe][idx]){
        int x=total.ans[idxe][idx];
        ++idx;
        if(total.ans[idxe][idx]==0){
            load.append(total.node[x].name);
        }
        else{
            load.append(total.node[x].name);
            load.append("-->");
        }
    }
    if(idx>1){
        QString le=QString::number(totlen);
        ui->load->setText(load);
        ui->len->setText(le);
    }
    else{
        ui->load->setText("无法到达");
    }
    qDebug()<<"总路程"<<totlen<<'\n';
}


void MainWindow::on_search_clicked()
{
    QStringList list;
    QString s=ui->searchText->text();
    total.print(s);
    qDebug()<<total.cnttotal<<'\n';
    if(total.cnttotal==0){
        list.append("未找到相关节点");
        model=new QStringListModel(this);
        model->setStringList(list);
        ui->target->setModel(model);
        return;
    }
    for(int i=1;i<=total.cnttotal;++i){
        Node tmp=total.node[total.tot[i]];
        qDebug()<<tmp.id<<" "<<tmp.name<<'\n';
        QString name=tmp.name;
        QString id=QString::number(tmp.id);
        QString str1;
        str1.append("名称:");
        str1.append(name);
        str1.append("  编号:");
        str1.append(id);
        str1.append("\n");
        str1.append("简介:");
        str1.append(tmp.brief);
        qDebug()<<str1<<'\n';
        list.append(str1);
    }
    model=new QStringListModel(this);
    model->setStringList(list);
    ui->target->setModel(model);
}


void MainWindow::on_All_clicked(){
    ui->load->setText("");
    ui->len->setText("");
    QString s=ui->start->text();
    QString e=ui->end->text();
    if(!total.searchid(s)||!total.searchid(e)){
        QStringList list;
        if(!total.searchid(s)){
            list.append("起点名称错误");
        }
        if(!total.searchid(e)){
            list.append("终点名称错误");
        }
        model1=new QStringListModel(this);
        model1->setStringList(list);
        ui->Allo->setModel(model1);
        return;
    }
    bool f=ui->car->isChecked();
    int idxs=total.searchid(s);
    int idxe=total.searchid(e);
    total.init(idxs);
    total.searchAll(idxs,idxe,idxs,1,!f);
    QStringList list;
    for(int i=1;i<=total.cntAll;++i){
        int idx=1;
        QString tmp;
        tmp.append(s);
        tmp.append("-->");
        while(total.All[i][idx]){
            int pp=total.All[i][idx];
            QString name=total.node[pp].name;
            ++idx;
            if(total.All[i][idx]==0){
                tmp.append(name);
            }
            else{
                tmp.append(name);
                tmp.append("-->");
            }
        }
        tmp.append('\n');
        list.append(tmp);
    }
    if(total.cntAll==0){
        list.append("无法到达");
    }
    model1=new QStringListModel(this);
    model1->setStringList(list);
    ui->Allo->setModel(model1);
}


void MainWindow::on_pushButton_clicked()
{
    QString name=ui->name->text();
    QString pass=ui->pass->text();
    int ax=total.searchmanager(name,pass);
    if(ax==0){
        ui->tishi->setText("未找到该用户名");
    }
    else if(ax==1){
        ui->tishi->setText("密码错误");
    }
    else{
        ui->name->setText("");
        ui->pass->setText("");
        loadw.show();
    }
}

