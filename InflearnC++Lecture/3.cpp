#include <bits/stdc++.h>

using namespace std;
//0으로 나누는 일이 없도록 해야함.
int main()
{
    int n,tmpN, sum=0;
    cin>>n;
    tmpN = n/2;
    for(int i=1; i<=tmpN; i++)
    {
        if(n%i==0)
        {            
            if(tmpN==i)
            {
                sum+=i;
                cout<<i<<" = "<<sum;
            }
            else
            {
                cout<<i<<" + ";
                sum+=i;
            }
            
        }
    }
    return 0;
}