#include<bits/stdc++.h>
using namespace std;
int a,n, m,cnt=0, arr[20],ch[20], sum, i, path[20];
void DFS(int x)
{
    sum=0;
    for(i=0;i<n+2;i++)
    {
        sum+=arr[i]*ch[i];
    }
    //cout<<"SUM은"<<sum<<endl;
    if(x==n+1)
    {
        if(m==sum)//종료조건
        {
            cnt++;
            for(int i=0; i<x;i++)
            {
                cout<<path[i]<<" ";
            }
            puts("");
        }
    }
    else
    {
        ch[x]=1;
        path[x]=arr[x];
        DFS(x+1);

        ch[x]=0;
        path[x]=0;
        DFS(x+1);

        path[x]=-arr[x];
        ch[x]=-1;
        DFS(x+1);
    }

}
//오답임. 왜안될까? /3하면 답이긴 함
int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr[i]=a;
    }

    DFS(0);
    if(cnt==0)cout<<"-1"<<endl;
    else cout<<cnt<<endl;
    return 0;
}