#include<iostream>
using namespace std;
int s[10]={}, ch[10]={};

//s:1, e:2, n:3, d:4, m:5, o:6, r:7 y:8
int Send()
{
    return s[0]*1000+s[2]*100+s[3]*10+s[4];
}
int More()
{
    return s[5]*1000+s[6]*100+s[7]*10+s[2];
}
int Money()
{
    return s[5]*10000+s[6]*1000+s[3]*100+s[2]*10+s[8];
}
void DFS(int L)
{
    if(L==8)
    {
        if(Send()+More()==Money())
        {
            if(s[5]==0||s[1]==0) return;
            printf("  %d %d %d %d\n", s[0], s[2], s[3], s[4]);
            printf(" +%d %d %d %d\n", s[5], s[6], s[7], s[2]);
            printf("--------\n");
            printf("%d %d %d %d %d\n\n", s[5], s[6], s[3], s[2], s[8]);

        }
        
    }
    else
    {
        for(int i=0; i<10; i++)
        {
            if(ch[i]==0)
            {
                s[L]=i;
                ch[i]=1;
                DFS(L+1);
                ch[i]=0;
                
            }
        }
    }
}
int main()
{
    DFS(0);

    return 0;
}