#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt=0, a;
    char b[31]={};
    cin>>b;
    for(auto c:b)
    {
        if(c==')')cnt--;
        else if(c=='(')cnt++;
        if(cnt<0)break;
    }
    if(cnt==0)cout<<"YES";
    else cout<<"NO";
    return 0;
}