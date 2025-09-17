#include <bits/stdc++.h>

using namespace std;
void recur(int x)
{
    if(x==0)return;
    else
    {
        recur(x-1);
        cout<<x<<"\n";
        //printf("%d/n", x);
        
    }
}
int main()
{
    int a;
    cin>>a;
    recur(a);
    return 0;
}