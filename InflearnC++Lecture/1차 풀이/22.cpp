#include <iostream>

int main()
{
    int n, i,sum=0,tmp=0, a[100001]={};
    scanf("%d %d", &n, &i);
    for(int k=0;k<n;k++)
    {
        scanf("%d", &a[k]);
    }
    for(int j=0; j<(n-i+1); j++)
    {
        if(j==0)
        {
            for(int k=0; k<i; k++)
            {
                sum+=a[k];
                tmp=sum;
            }
            
        }
        else 
        {
            tmp=tmp-a[j-1]+a[i+j-1];
        }

        if(tmp>sum) sum=tmp;
    }
    printf("%d", sum);
    return 0;
}
