#include <iostream>

int main()
{
    int n,h[101]={}, nh, sum=0, max;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &h[i]);
    }
    max=h[n-1];
    for(int i=n-2; i>=0; i--)
    {
        if(max-h[i]<0)
        {
            max=h[i];
            sum++;
        }
    }
    printf("%d", sum);

    return 0;
}
