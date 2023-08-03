#include<bits/stdc++.h>

using namespace std;
int Q[100], f=-1, b=-1, ch[100];
vector<int> _map[10];
int main()
{
    int i,a,b,x;
    for(i=1;i<=6; i++)
    {
        scanf("%d %d", &a, &b);
        _map[a].push_back(b);
        _map[b].push_back(a);

    } 
    Q[++b]=1;
    ch[1]=1;
    while(f<b)
    {
        x=Q[++f];
        printf("%d ", x);
        for(i=0;i<_map[x].size(); i++)
        {
            if(ch[_map[x][i]]==0)
            {
                ch[_map[x][i]]=1;
                Q[++b]=_map[x][i];
            }
        }
    }

}