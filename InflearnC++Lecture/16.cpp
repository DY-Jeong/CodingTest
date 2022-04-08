#include <iostream>

int main()
{
    char a[101] = {};
    int b[65] = {};
    int c[65] = {};
    scanf("%s", &a);
    for(int i=0; i<100; i++)
    {
        if(a[i]>0) b[a[i]-char('A')]++; //문자열 공백은 0이 들어가있다!!!!
    }
    scanf("%s", &a);
    for(int i=0; i<100; i++)
    {
        c[a[i]-char('A')]++;
    }
    for(int i=0; i<65; i++)
    {
        if(b[i]-c[i]!=0)
        {
            printf("NO");
            break;
        }
        else if(i==64)
        {
            printf("YES");
        }
    }

    return 0;
}
