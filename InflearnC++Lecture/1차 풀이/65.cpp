#include <vector>
#include <algorithm> 
#include <stdio.h>
#include <stack>
using namespace std;
//경로탐색
int map[30][30], ch[30], cnt=0, n;
void DFS(int x)
{ int i;
    if(x==n)
    {
        cnt++;
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(map[x][i]==1&&ch[i]==0)
            {
                ch[i]=1;
                DFS(i);
                ch[i]=0;//체크를 풀어줘야 하는 이유
                //돌아와서 다음 경로를 확인하려면 필요함
            }
        }
    }
}
int main()
{
    int m, a, b;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=9; i++)
    {
        scanf("%d %d", &a, &b);
        map[a][b]=1;
    }
    ch[1]=1;//체크배열
    DFS(1);   
    printf("%d", cnt);
    return 0;
}
