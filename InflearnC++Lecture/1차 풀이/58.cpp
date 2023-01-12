#include <vector>
#include <algorithm> 
#include <stdio.h>
#include <stack>
using namespace std;

//재귀함수
void D(int v)
{
    if(v>7)
    {
        return;
    }
    else 
    {
        //printf("FrontSearch : %d\n", v);
        D(v*2);
        printf("MiddleSearch : %d\n", v);
        D(v*2+1);
        //printf("LastSearch : %d\n", v);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    D(n);
    return 0;
}
