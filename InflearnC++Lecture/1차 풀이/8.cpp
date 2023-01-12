#include <iostream>

int main()
{
    char a[31] = {};
    int b=0, c=0;
    fgets(a, sizeof a, stdin);
    for(int i=0; i<=30; i++)
    {
        if(a[i]==char('('))
        {
           b++;
        }
        else if (a[i]==char(')'))
        {
           b--;
           if(b<0)
           {
               printf("NO");
               return 0;
           }
        }
    }

    if((b-c)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;


}

