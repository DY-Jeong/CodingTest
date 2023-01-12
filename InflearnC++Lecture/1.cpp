#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, res=0, tmp;
    cin>>n>>m;
    for(int i=1;i<n;i++)
    {
        tmp = m*i;
        if(tmp>n) break;
        res+=tmp;
    }
    cout<<res;
}