#ifndef NODETOT_H
#define NODETOT_H
#include<Node.h>
#include<Edge.h>
#include<vector>
#include<string>
#include<QString>
#include<QVector>
#include<manager.h>
using namespace std;
class nodetot
{
public:
    Node node[1005];//所有节点
    vector<Edge>edge[1005];//邻接表
    int ans[1005][1005];//所有符合条件的节点
    int tot[1005];
    int All[1005][1005];//所有路径
    int isId[10005];//查找最小没用过的ID
    manager key[1005];//存管理员
    int cntAll;//路径个数
    int cnttotal;//符合条件的节点数
    int cntnode;//节点数
    int cntkey;//管理员数
    nodetot();
    ~nodetot();
    void init(int s);
    int searchmanager(QString s1,QString s2);
    bool isExistName(QString s);
    void searchAll(int s,int e,int x,int t,bool f);
    int searchid(QString name);
    void print(QString s);
    int minload(int s,int e,bool f);
};

#endif // NODETOT_H
