#include<bits/stdc++.h>
using namespace std;
int ch[10];//무방향은 check도해야함
vector<int> mapp[10];
queue<int> Q;
int main()
{
    int i, a, b, x;
  for(i=0;i<6;i++)
  {
    cin>>a>>b;
    mapp[a].push_back(b);
    mapp[b].push_back(a);//b-a추가하면 양방향임.
  }
  Q.push(1);//queue의 push를 처음으로 함
  ch[1]=1;
  while (!Q.empty())
  {
    x=Q.front();//queue의 첫번째 값 읽음. 실제는 [0]쓰고 pop
    Q.pop();
    cout<<x;
    for(i=0;i<mapp[x].size();i++)
    {
        if(ch[mapp[x][i]]==0)
        {
            ch[mapp[x][i]]=1;
            Q.push(mapp[x][i]);
        }
    }
  }
  
}