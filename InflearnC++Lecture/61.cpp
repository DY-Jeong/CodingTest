#include <vector>
#include <algorithm> 
#include <stdio.h>
#include <stack>
using namespace std;
int n, ch[11]={}, obj, cnt=0;
//재귀함수를 이용한 DFS
void DFS(int L, int sum)
{
    if(L==n)
    {
        if(sum==obj) cnt++;
        return;
    }
    else
    {
        DFS(L+1, sum+ch[L]);
        DFS(L+1, sum-ch[L]);
        DFS(L+1, sum);
        //세가지 경로로도 나눌 수 있다!
        //덧셈, 뺄셈, 안한거!
    }
    
   
}

int main()
{
    scanf("%d %d", &n, &obj);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ch[i]);
    }
    DFS(0, 0);
    if(cnt==0) printf("-1");
    else printf("%d", cnt);
    return 0;
}
