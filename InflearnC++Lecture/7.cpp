#include <bits/stdc++.h>

using namespace std;
//cin은 띄어쓰기로 들어오면 잘려서 들어옴
//fgets(a, sizeof a, stdin)
int main()
{
    char a[101]={};
    vector<char> k;
    int diff;
    diff='a'-'A';

    fgets(a, sizeof a, stdin);
    for(auto c:a)
    {
        if(c>64&&c<91)k.push_back(c+diff);
        else if(c>96&&c<123)k.push_back(c);
    }
    for(auto c:k)
    {
        cout<<c;
    }
    return 0;
}