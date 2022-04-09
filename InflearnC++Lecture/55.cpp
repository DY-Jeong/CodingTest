#include <vector>
#include <algorithm> 
#include <stdio.h>
#include <stack>
using namespace std;
//Stack 
int main()
{
    int n, i,k,j, tmp;
    scanf("%d", &n);
    stack<int> jc;
    int a[32]={};
    char b[60]={};
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    j=k=0;
    for(i=1;i<=n;i++)
    {
        while (jc.empty()||jc.top()!=i)
        {
            jc.push(a[k++]);
            b[j++]='P';
            if(k>65)
            {
                printf("impossible");
                return 0;
            }
        }
        if(jc.top()==i)
        {
            jc.pop();
            b[j++]='O';
        }
    }
    for(i=0;b[i]==char('P')||b[i]==char('O');i++)
    {
       printf("%c", b[i]);
    }
    
    return 0;
}

