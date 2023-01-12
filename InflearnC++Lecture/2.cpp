#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, res, i;
    cin>>a>>b;
    i=b-a;
    for(int j=0; j<i;j++)
    {
        cout<<a+j<<" + ";     
        res+=a+j;   
    }
    res+=b;
    cout<<b<<" = "<<res;
}