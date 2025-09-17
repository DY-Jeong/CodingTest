#include <vector>
#include <algorithm> 
#include <stdio.h>
#include <stack>
using namespace std;
int n, ch[11];

//재귀함수를 이용한 DFS
void DFS(int L)
{
    int i;
    if(L==n+1)
    {
        for(i=1; i<=n; i++)
        {
            if(ch[i]==1) printf("%d ", i);
        }
        printf("\n");
        //return;
    }
    else 
    {
        ch[L]=1;
        DFS(L+1);
        ch[L]=0;
        DFS(L+1);
    }
}

int main()
{
    scanf("%d", &n);
    DFS(1);
    return 0;
}
