#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int a, b;
    scanf("%d-%d", &a, &b);
    a=a/10000;
    b=b/1000000;
    if(b==1)
    {
        cout<<2020-(1900+a)<<" "<<"M";
    }
    else if(b==2) cout<<2020-(1900+a)<<" "<<"W";
    else if(b==3)cout<<2020-(2000+a)<<" "<<"M";
    else cout<<2020-(2000+a)<<" "<<"W";

    return 0;
}