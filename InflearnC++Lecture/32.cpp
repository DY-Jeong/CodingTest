#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,tmp,min=0, arr[101]={}, cnt[101]={};
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]>arr[i+1])
        {
            tmp=arr[i];
            arr[i]=arr[i+1];
            arr[i+i]=tmp;
        }
    }


}