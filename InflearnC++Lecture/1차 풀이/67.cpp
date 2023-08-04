#include<bits/stdc++.h>
using namespace std;
int n, m, a, b, c,value, minval=9999999, sum, ch[21]={};//최소값 받으려면 초기화를 큰값으로~!
vector<pair<int, int>> mapp[21];
void DFS(int node, int summation)
{
    int i;
    if(node==n)
    {
        if(minval>summation) minval=summation;
        //cout<<"최소값"<<minval<<endl;
    }
    else
    {
        for(i=0; i<mapp[node].size(); i++)
        {
            if(ch[mapp[node][i].first]==0)
            {
                //cout<<mapp[node][i].first<<"노드진입"<<endl;
                ch[mapp[node][i].first]=1;
                DFS(mapp[node][i].first, summation+mapp[node][i].second);
                ch[mapp[node][i].first]=0;
            }
        }
    }

}
int main()
{
    int i;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>a>>b>>c;
        pair<int, int> p1 = make_pair(b,c);
        mapp[a].push_back(p1);
    }
    //cout<<mapp[1].size()<<endl;
    DFS(1, 0);
    cout<<minval<<endl;

    return 0;
}