#include <bits/stdc++.h>

using namespace std;
//아직못품
int main()
{
    int cnt=1, a;
    cin>>a;
    int arr[50001]={};
    arr[1]=1;
    arr[2]=2;
    arr[3]=2;
    for(int i=4; i<=a; i++)
    {       
        for(int j=2; j<=a; j++)
        {
            if(i%j==0&&arr[i/j]==2)
            {
                arr[i]=1+arr[i/j];
                break;
            }
            else
            {
                arr[i]=2;
                break;
            } 
        }            
    }
    for(auto c:arr)
    {
        if(c!=0)cout<<c<<" ";
    }

    return 0;
}