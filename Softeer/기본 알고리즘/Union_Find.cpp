#include<iostream>
int unf[10001];

using namespace std;

int Find(int v)//노드 구조를 2차원 구조로 바꿔줌!!
{
    if(v==unf[v]) return v;
    else return Find(unf[v]);
}
void Union(int a, int b)//노드 구조를 2차원 구조로 바꿔줌!!
{
    a=Find(a);
    b=Find(b);
    if(a=!b)unf[a]=b;
}

int main(int argc, char** argv)
{
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++)
    {
        unf[i]=i;
    }
    for(int i=0; i<m; i++)
    {
        scanf("%d %d", &a, &b);
        Union(a, b);
    }
    scanf("%d %d", &a, &b);
    a=Find(a);
    b=Find(b);
    if(a==b) printf("YES");
    else printf("NO");

	return 0;
}