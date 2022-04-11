#include<iostream>
#include<algorithm>
#include<vector>
//1. 가중치를 오름차순으로 정렬
//2. 만약 선택하고 회로가 됐을 시 선택안함
//3. Union_Find를 하여 한 집합이면 Pass함.

using namespace std;
int way[201];

struct Edge
{
    int N1, N2, value;
    Edge(int a, int b, int d)
    {
        N1=a;
        N2=b;
        value=d;
    }
    bool operator<(const Edge &a)const
    {
        return value<a.value;
    }
};

int Find(int a)
{
    if(way[a]==a) return a;
    else return Find(way[a]);
}

void Union(int a, int b)
{
    a=Find(a);
    b=Find(b);
    if(a!=b) way[a]=b;
}

int main(int argc, char** argv)
{
    int v,i, e, a, b, c, res=0;
    scanf("%d %d", &v, &e);
    vector<Edge> edg;
    for(int i=0; i<v; i++)
    {
        way[i]=i;
    }
    for(int i=0; i<e; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        edg.push_back(Edge(a, b, c));
    }
    sort(edg.begin(), edg.end());
    for(i=0; i<e; i++)
    {
        int fa=Find(edg[i].N1);
        int fb=Find(edg[i].N2);
        if(fa!=fb)
        {
            res+=edg[i].value;
            Union(fa, fb);
        }

    }
    printf("%d", res);
	return 0;
}