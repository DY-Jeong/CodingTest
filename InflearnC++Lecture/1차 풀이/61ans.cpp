#include<bits/stdc++.h>
using namespace std;
int a,n, m,cnt=0, arr[20],ch[20], sum, i, path[11];
void DFS(int x, int val)
{
    if(x==n+1)
    {
        if(val==sum)//종료조건
        {
            cnt++;
            for(int i=0; i<x;i++)
            {
                cout<<path[i]<<" ";
            }
            puts("");
        }
    }
    //else if(x>n+2)return;
    else
    {
        path[x]=arr[x];
        DFS(x+1, val+arr[x]);
        path[x]=-arr[x];
        DFS(x+1, val-arr[x]);
        path[x]=0;
        DFS(x+1, val);

    }

}
int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr[i]=a;
    }

    DFS(1,0);
    if(cnt==0)cout<<"-1"<<endl;
    else cout<<cnt<<endl;
    return 0;
}