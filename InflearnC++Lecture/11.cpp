#include <bits/stdc++.h>

using namespace std;
//못풀음
int main()
{
    int n, i,tmp, cnt=0;
    cin>>n;
    if(n<10)
    {
        cout<<n;
        return 0;
    }
    else
    {
        cnt+=9;
        for(i=1; i<11; i++)
        {
            tmp=pow(10,i);
            if((n-tmp*10)<0)
            {
                cnt+=(n-(tmp-1))*(i+1);
                break;
            }
            else
            {
                cnt+=(tmp*10-1);
            }
        }
    }
    
    cout<<cnt;
    return 0;
}
