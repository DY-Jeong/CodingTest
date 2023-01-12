#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
    int n, i, now, pre, pos;
    scanf("%d", &n);
    std::vector<int> ch(n);//ch라는 이름의n차원 배열이 생성
    scanf("%d", &pre);
    for(i=1;i<n;i++)
    {
        scanf("%d", &now);
        pos =abs(pre-now);
        if(pos>0&&pos<n&&ch[pos]==0)ch[pos]=1; //배열의 참조값이 범위를 넘지 않는지 확인!!!
        else
        {
            printf("NO\n");
            return 0;
        }
        pre = now;
    }
    printf("YES\n");

    return 0;
}



