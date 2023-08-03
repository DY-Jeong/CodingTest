#include<bits/stdc++.h>

using namespace std;

queue<int> que;
vector<int> a[10];
int f, b, i, j, k;
int main()
{
  for(i=0;i<6;i++)
  {
    cin>>j>>k;
    a[j].push_back(k);
  }
  que.push(1);
  for(i=0; i<7;i++)
  {
    while(!a[i].empty())
    {
        que.push(a[i][0]);
        a[i].erase(a[i].begin());
    }
  }
  while (!que.empty())
  {
    cout<<que.front()<<" ";
    que.pop();
  }
  

}