#include<bits/stdc++.h>
using namespace std;
int a, n, i, j, sum=0, rest=0, all=0, arr[11], ch[11], yorn=0;

void DFS(int x)
{
    if(yorn==1)return;
    sum=0;
    //cout<<"부분집합은";
    for(i=0;i<n;i++)
    {
        sum+=arr[i]*ch[i];
        //cout<<arr[i]*ch[i]<<" ";
        rest=all-sum;        
    }
    //cout<<", SUM은"<<sum<<" rest는"<<rest<<"\n";

    if(sum>rest or x>n+1)//종료조건
    {
        return;
        //cout<<"NO";//조건1
    }
    else if(sum==rest)
    {
        yorn=1;//조건2        
        return ;
    }
    else
    {
        ch[x]=1;
        DFS(x+1);
        ch[x]=0;
        DFS(x+1);
    }
}
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr[i]=a;
        all+=a;
    }
    
    DFS(0);
    if(yorn==1)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
