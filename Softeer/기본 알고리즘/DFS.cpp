#include <vector>
#include <algorithm> 
#include <stdio.h>
#include <stack>
using namespace std;
//경로탐색
int arr[7][7];
int ch[7][7];
int cnt=0;
int dx[4]={0, 1, 0, -1};
int dy[4]={1, 0, -1, 0};
void DFS(int x, int y)
{
    int i, xx, yy;
    if(x==6&&y==6)
    {
        cnt++;
    }
    else
    {
        for(i=0; i<4; i++)
        {
            xx=x+dx[i];
            yy=y+dy[i];
            if(xx<0||yy<0||xx>6||yy>6) continue;
            if(arr[xx][yy]==0&&ch[xx][yy]==0)
            {
                ch[xx][yy]=1;
                DFS(xx, yy);
                ch[xx][yy]=0;
            }
        }

    }
}

int main()
{
    int i,j,x, y, tmp;
    
    for(j=0; j<7; j++)
    {
        for(i=0;i<7;i++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    ch[0][0]=1;
    DFS(0,0);
    printf("%d", cnt);
    
    return 0;
}
