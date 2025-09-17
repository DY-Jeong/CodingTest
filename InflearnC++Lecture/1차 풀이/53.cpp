#include <vector>
#include <algorithm> 
#include <stdio.h>
#include <stack>
using namespace std;
//Stack
int main()
{
    int n, k;
    stack<int> s;
    char str[20] = "0123456789ABCDEF";
    scanf("%d %d",&n, &k);
    while (n>0)
    {
        s.push(n%k);
        n=n/k;
    }
    
    while (!s.empty())
    {
        printf("%c", str[s.top()]); //top은 최상단의 값 반환
        s.pop();//꼭 빼서 제거해야 함. Pop은 void반환
    }
    return 0;
}

