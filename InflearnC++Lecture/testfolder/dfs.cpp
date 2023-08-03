#include <bits/stdc++.h>

using namespace std;

void dfsfront(int n)
{
    if(n>=8)return;
    else
    {
        cout<<n;
        dfsfront(n*2);
        dfsfront(n*2+1);
    }
}
void dfsmiddle(int n)
{
    if(n>=8)return;
    else
    {
        dfsmiddle(n*2);
        cout<<n;
        dfsmiddle(n*2+1);
    }
}
void dfslast(int n)
{    
    if(n>=8)return;
    else
    {
        dfslast(n*2);        
        dfslast(n*2+1);
        cout<<n;
    }
}


int main()
{
    cout<<"\n"<<"dfsfront"<<"\n";
    dfsfront(1);//전위순회
    
    cout<<"\n"<<"dfsmiddle"<<"\n";
    dfsmiddle(1);//중위순회

    cout<<"\n"<<"dfslast"<<"\n";
    dfslast(1);//후위순회
}