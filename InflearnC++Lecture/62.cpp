#include <vector>
#include <algorithm> 
#include <stdio.h>
#include <stack>
using namespace std;
int dt[10], tmp[10];
//병합정렬
void divide(int lt, int rt)
{
    int mid;
    int p1, p2, p3;
    if(lt<rt){
        mid=(lt+rt)/2;
        divide(lt, mid);
        divide(mid+1, rt);
        p1=lt;
        p2=mid+1;
        p3=lt;
        while(p1<=mid&&p2<=rt)
        {
            if (dt[p1]<dt[p2]) tmp[p3++]=dt[p1++];
            else tmp[p3++]=dt[p2++];
        }
        while(p1<=mid) tmp[p3++]=dt[p1++];
        while (p2<=rt) tmp[p3++]=dt[p2++];
        for(int i=lt; i<=rt; i++)
        {
            dt[i]=tmp[i];
        }
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &dt[i]);
    }
    divide(1,n);
    for(i=1; i<=n; i++)
    {
        printf("%d ", dt[i]);
    }


    return 0;
}
