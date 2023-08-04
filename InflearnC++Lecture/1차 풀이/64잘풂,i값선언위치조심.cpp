#include<bits/stdc++.h>
using namespace std;
int ch[21]={}, n, m, a, b, cnt=0;
vector<int> mapp[21];
void DFS(int x)
{
    int i;//i 변수를 전역으로 두고 같이쓰면 안됨!
    //cout<<"현재노드"<<x<<endl;
    if(x==n)
    {
        cnt++;
      //  cout<<"도착함"<<endl;
    } 
    else
    {
        for(i=0;i<mapp[x].size();i++)
        {
            if(ch[mapp[x][i]]==0)
            {
            ch[mapp[x][i]]=1;
        //    cout<<"갈 노드"<<mapp[x][i]<<endl;
            DFS(mapp[x][i]);
        //    cout<<"체크지울 노드"<<mapp[x][i]<<endl;
            ch[mapp[x][i]]=0;
            //mapp[x].erase(mapp[x].begin());
            }
        }
        
    }


}

int main()
{
    int i;
    cin>>n>>m;
    for(i=0; i<m;i++)
    {
        cin>>a>>b;
        mapp[a].push_back(b);
    }
    for(auto var : mapp)
    {        
        for(auto var2 : var)
        {
            //cout<<"출발노드"<<cnt<<"도착노드"<<var2<<endl;
        }
        cnt++;
    }
    cnt=0;
    ch[1]=1;
    DFS(1);
    cout<<cnt;

    return 0;
}