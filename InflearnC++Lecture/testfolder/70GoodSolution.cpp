#include<bits/stdc++.h>
//큐는 선입선출, 스택은 선입후출!!!
using namespace std;
queue<int> Q;
vector<int> mapp[20];
int ch[20], a, b,c,d,i,x, dis[20];
int main()
{
    cin>>a>>b;
    for(i=0;i<b;i++)
    {
        cin>>c>>d;
        mapp[c].push_back(d);
    }

    Q.push(1);    
    ch[1]=1;
    while(!Q.empty())
    {
        x=Q.front();         
        Q.pop();  
        for(i=0; i<mapp[x].size(); i++)
        {            
            if(ch[mapp[x][i]]==0)
            {   
                ch[mapp[x][i]]=1;               
                Q.push(mapp[x][i]);
                dis[mapp[x][i]]=dis[x]+1;//미친
            }            
        }
        
    }
    for(i=2;i<=a;i++)
    {
        cout<<i<<" : "<<dis[i]<<"\n";
    }


}