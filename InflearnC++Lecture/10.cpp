#include <bits/stdc++.h>

using namespace std;

//마지막 문제있음

int main()
{
    int a,i,t,max=0,maxpos=0, arr[100]={},arr2[100]={}, cnt[100]={};
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>t;
        arr[i]=t;
        arr2[i]=t;
    }
    for(i=0;i<a;i++)
    {
        while(arr[i]>0)
        {
            cnt[i]+=arr[i]%10;
            arr[i]=arr[i]/10;
        }
    }
    for(i=1;i<a;i++)
    {
        if(max<cnt[i]&&arr2[maxpos]<arr2[i])
        {
            max=cnt[i];
            maxpos=i;
        }
    }
    cout<<arr2[maxpos];
    return 0;
}