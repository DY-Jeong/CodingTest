#include <iostream>

int main()
{
    int n, m, k1=0, k2=0;
    int data[101]={};

    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &data[i]);
    }
    for(int i=0; i<n; i++)
    {
       if(data[i]-m>0)
       {
           k1++;
           if(k1>k2)k2=k1;
       }
       else if(data[i]-m<=0)
       {
           k1=0;
       }
    }
    if(k2==0)
    {
        printf("-1");
    }
    else printf("%d", k2);
    return 0;
}
