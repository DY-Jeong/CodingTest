#include <vector>
#include <algorithm> 
#include <stdio.h>
#include <stack>
using namespace std;
int tmp=1;
//재귀함수
void recur(int x)
{
    if(x==0)
    {
        return;
    }
    else 
    {
        recur(x-1);
        printf("%d ", x);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    recur(n);
    return 0;
}

//내가 짠 재귀함수
void PrintNums(int x)
{
    if(tmp>x)
    {
        return;
    }
    else 
    {printf("%d ", tmp++);
    PrintNums(x);
    }
}