#include "nodetot.h"
#include<manager.h>
#include<QString>
#include<queue>
#include<QDebug>
#include<string.h>
#include<string>
#include<QFile>
#include<map>
#include<QStringList>
#include <QTextCodec>
#include<QTextStream>
using namespace std;
nodetot::nodetot() {
    cntnode=0;
    cntkey=0;
    int id=0;
    for(int i=1;i<=10005;++i){
        isId[i]=0;
    }
    QFile file1("E:\\QTcode\\test02\\node.txt");
    if (file1.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file1);
        in.setCodec("UTF-8");
        while(!in.atEnd()){
            QString line=in.readLine();
            QStringList list=line.split(",");
            ++cntnode;
            qDebug()<<"cntnode="<<cntnode;
            int idx=list.at(0).toInt();
            int x1=list.at(2).toInt();
            int y1=list.at(3).toInt();
            node[cntnode].id=idx;
            node[cntnode].name=list.at(1);
            node[cntnode].x=x1;
            node[cntnode].y=y1;
            node[cntnode].brief=list.at(4);
            ++isId[idx];
        }
        qDebug()<<"cntnode="<<cntnode;
        file1.close();
    }
    QFile file2("E:\\QTcode\\test02\\edge.txt");
    if (file2.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file2);
        in.setCodec("UTF-8");
        while(!in.atEnd()){
            QString line=in.readLine();
            if(line.length()==0)break;
            QStringList list=line.split(",");
            int start=list.at(0).toInt();
            int end=list.at(1).toInt();
            int val=list.at(2).toInt();
            int type=list.at(3).toInt();
            Edge tmp;
            tmp.end=end;
            ++id;
            tmp.length=val;
            tmp.type=type;
            edge[start].push_back(tmp);
            tmp.end=start;
            edge[end].push_back(tmp);
        }
        file2.close();
    }
    QFile file3("E:\\QTcode\\test02\\manager.txt");
    if (file3.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file3);
        in.setCodec("UTF-8");
        while(!in.atEnd()){
            QString line=in.readLine();
            QStringList list=line.split(",");
            ++cntkey;
            key[cntkey].name=list.at(0);
            key[cntkey].pass=list.at(1);
        }
        qDebug()<<"cntkey="<<cntkey;
        file3.close();
    }
    qDebug()<<"cntnode="<<cntnode;
    qDebug()<<"cntedge="<<id;
    for(int i=0;i<edge[4].size();++i){
        qDebug()<<node[4].name<<"->"<<node[edge[4][i].end].name<<" "<<edge[4][i].type;
    }
}

nodetot::~nodetot(){
    map<pair<int,int>,int>mp;
    QFile file1("E:\\QTcode\\test02\\node.txt");
    if (file1.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream str1(&file1);
        str1.setCodec("UTF-8");
        for(int i=1;i<=cntnode;++i){
            str1<<node[i].id<<","<<node[i].name<<","<<node[i].x<<","<<node[i].y<<","<<node[i].brief<<endl;
        }
        file1.close();
    }
    QFile file2("E:\\QTcode\\test02\\edge.txt");
    if (file2.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream str2(&file2);
        str2.setCodec("UTF-8");
        for(int i=1;i<=cntnode;++i){
            for(int j=0;j<edge[i].size();++j){
                int p=edge[i][j].end;
                int v=edge[i][j].length;
                int ty=edge[i][j].type;
                if(mp.count({i,p}))continue;
                str2<<i<<","<<p<<","<<v<<","<<ty<<'\n';
                mp.insert({{i,p},1});
                mp.insert({{p,i},1});
            }
        }
        file2.close();
    }
    QFile file3("E:\\QTcode\\test02\\manager.txt");
    if (file3.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream str1(&file3);
        str1.setCodec("UTF-8");
        qDebug()<<"cntkey="<<cntkey<<'\n';
        for(int i=1;i<=cntkey;++i){
            str1<<key[i].name<<","<<key[i].pass<<'\n';
        }
        file3.close();
    }
}

int nodetot::searchid(QString name)
{
    for(int i=1;i<=cntnode;++i){
        if(node[i].name==name){
            return i;
        }
    }
    return 0;
}

void nodetot::print(QString s){
    cnttotal=0;
    if(s=="所有节点"){
        for(int i=1;i<=cntnode;++i){
            tot[++cnttotal]=i;
        }
        return;
    }
    for(int i=1;i<=cntnode;++i){
        QString sid=QString::number(node[i].id);
        if(sid==s||node[i].name==s){
            tot[++cnttotal]=i;
        }
    }
}
struct pos{
    int p;
    double v;
    bool operator <(const pos& x)const{
        return x.v<v;
    }
};
bool vis[1005];
int nodetot::minload(int s,int e,bool f){
    int dis[1005];
    bool vis[1005];
    priority_queue<pos>q;
    for(int i=1;i<=cntnode;++i){
        dis[i]=1e9;
        vis[i]=0;
    }
    for(int i=1;i<=100;++i){
        for(int j=1;j<=100;++j){
            ans[i][j]=0;
        }
    }
    ans[s][1]=s;
    dis[s]=0;
    memset(vis,false,sizeof(vis));
    q.push({s,0});
    while(!q.empty()){
        pos tmp=q.top();
        q.pop();
        int k=tmp.p;
        if(vis[k])continue;
        vis[k]=1;
        qDebug()<<"k="<<k;
        for(int i=0;i<edge[k].size();++i){
            int p=edge[k][i].end;
            int v=edge[k][i].length;
            int type=edge[k][i].type;
            if(dis[k]+v<dis[p]&&(type||f)){
                dis[p]=dis[k]+v;
                int idx=1;
                while(ans[k][idx]){
                    ans[p][idx]=ans[k][idx];
                    ++idx;
                }
                ans[p][idx+1]=0;
                ans[p][idx]=p;
                if(!vis[p]){
                    q.push({p,dis[p]});
                }
            }
        }
    }
    return dis[e];
}
int a[1005];

void nodetot::init(int s){
    for(int i=1;i<=1000;++i){
        a[i]=0;
        vis[i]=0;
        for(int j=1;j<=1000;++j){
            All[i][j]=0;
        }
    }
    vis[s]=1;
    cntAll=0;
}


void nodetot::searchAll(int s, int e,int x,int t,bool f){
    if(x==e){
        int idx=1;
        ++cntAll;
        while(a[idx]){
            All[cntAll][idx]=a[idx];
            ++idx;
        }
        return;
    }
    for(int i=0;i<edge[x].size();++i){
        int p=edge[x][i].end;
        int v=edge[x][i].length;
        int ty=edge[x][i].type;
        if(!vis[p]&&(!ty||f)){
            a[t]=p;
            vis[p]=true;
            searchAll(s,e,p,t+1,f);
            a[t]=0;
            vis[p]=false;
        }
    }
}

int nodetot::searchmanager(QString s1,QString s2){
    bool f=0;
    int idx=0;
    for(int i=1;i<=cntkey;++i){
        if(key[i].name==s1){
            f=1;
            idx=i;
            break;
        }
    }
    if(!f){
        return 0;
    }
    else{
        if(s2==key[idx].pass){
            return 2;
        }
        else return 1;
    }
}

bool nodetot::isExistName(QString s){
    for(int i=1;i<=cntkey;++i){
        if(key[i].name==s){
            return true;
        }
    }
    return false;
}

