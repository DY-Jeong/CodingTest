#include <iostream>

int main()
{
    int n,i,max=0,min=9999999;
    int a;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a);
        if(max<a){max = a;}
        if(min>=a){min = a;}
    }
    printf("%d", max-min);
    return 0;

    
}