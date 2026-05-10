#include "dele.h"
#include "ui_dele.h"
#include<nodetot.h>
#include<QString>
#include<QDebug>
#include<Node.h>
#include<Edge.h>
extern nodetot total;
dele::dele(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::dele)
{
    ui->setupUi(this);
    setWindowTitle("删除节点");
    setWindowIcon(QIcon("E:\\QTcode\\test02\\tupian\\th.jpg"));
}

dele::~dele()
{
    delete ui;
}

void dele::on_del_clicked()
{
    QString s=ui->mas->text();
    int idx=0;
    for(int i=1;i<=total.cntnode;++i){
        QString sid=QString::number(total.node[i].id);
        if(sid==s||total.node[i].name==s){
            idx=i;
            break;
        }
    }
    if(!idx){
        ui->tishi->setText("未找到节点");
    }
    else{
        ui->tishi->setText("删除成功");
        Node tmp=total.node[idx];
        --total.isId[total.node[idx].id];
        total.node[idx]=total.node[total.cntnode];
        total.node[total.cntnode]=tmp;
        total.edge[idx].clear();
        Edge x[1000];
        int cnt=0;
        for(int i=0;i<total.edge[total.cntnode].size();++i){
            ++cnt;
            x[cnt]=total.edge[total.cntnode][i];
        }
        total.edge[total.cntnode].clear();
        for(int i=1;i<=cnt;++i){
            total.edge[idx].push_back(x[i]);
        }
        for(int i=1;i<=total.cntnode;++i){
            for(std::vector<Edge>::iterator l=total.edge[i].begin();l!=total.edge[i].end();++l){
                Edge tmp=*l;
                if(tmp.end==0)break;
                qDebug()<<tmp.end<<" "<<total.node[tmp.end].name;
                if(tmp.end==idx){
                    qDebug()<<"111";
                    total.edge[i].erase(l);
                }
                else if(tmp.end==total.cntnode){
                    qDebug()<<"222";
                    l->end=idx;
                }
            }
        }
        --total.cntnode;
    }
}

