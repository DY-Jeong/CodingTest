#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
//선택정렬
int main()
{
    int n, i, idx, j, tmp;
    scanf("%d", &n);
    int a[100]={};
    
    for(i=1;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        idx=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[idx]) idx=j;
        }
        tmp=a[i];
        a[i]=a[idx];
        a[idx]=tmp;

    }

    
    printf("YES\n");

    return 0;
}



