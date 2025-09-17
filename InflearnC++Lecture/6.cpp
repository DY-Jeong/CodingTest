#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[51]={};
    vector<int> b;
    int c=0, cnt=1;
    cin>>a;
    for(char ch:a)
    {
        if(ch>='0'&&ch<='9')
        {
            b.push_back(ch-48);
        }
    }
    for(auto d:b)
    {
        c=c*10+d;
    }
    cout<<c<<"\n";
    for(int i=1; i<=((c/2)+1); i++)
    {
        if(c%i==0)cnt++;
    }
    cout<<cnt;

    return 0;
}