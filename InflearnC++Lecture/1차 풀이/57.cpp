#include <vector>
#include <algorithm> 
#include <stdio.h>
#include <stack>
using namespace std;

//재귀함수
void D(int x)
{
    if(x==0)
    {
        return;
    }
    else 
    {
        D(x/2);
        printf("%d ", x%2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    D(n);
    return 0;
}
