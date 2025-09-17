#include <bits/stdc++.h>

using namespace std;

//For 한번에 안될거같으면 2번해

int main()
{
    int a,i,t,max1=0,max2=0,maxpos=0, arr[100]={},arr2[100]={}, cnt[100]={};
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
    for(i=0;i<a;i++)
    {
        if(cnt[i]>max1)
        {
            maxpos=i;
            max1=cnt[i];
        }
    }
    for(i=0; i<a; i++)
    {
        if(cnt[i]==max1)
        {
            if(arr2[i]>max2)max2=arr2[i];
        }
    }
    cout<<max2;
    return 0;
}