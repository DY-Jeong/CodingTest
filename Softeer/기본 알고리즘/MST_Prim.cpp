#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

int ch[30];

struct Edge
{
    int N1, value;
    Edge(int a, int d)
    {
        N1=a;
        value=d;
    }
    bool operator<(const Edge &a)const
    {
        return value>a.value;//<면 최대힙, >면 최소힙
    }
};

int main(int argc, char** argv)
{
	priority_queue<Edge> Q;
	vector<pair<int, int> > map[30];
	int i, n, m, a, b, c, res=0;
	scanf("%d %d", &n, &m);
	for(i=0;i<m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}
	Q.push(Edge(1,0));
	while (!Q.empty())
	{
		Edge tmp = Q.top();
		Q.pop();
		int v=tmp.N1;
		int cost=tmp.value;
		if(ch[v]==0)
		{
			res+=cost;
			ch[v]=1;
			for(i=0; i<map[v].size();i++)
			{
				Q.push(Edge(map[v][i].first, map[v][i].second));
			}
		}
	}
	printf("%d", res);

	return 0;
}