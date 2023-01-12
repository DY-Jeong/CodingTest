#include <iostream>

int main()//시간초과됐던 문제
//생각의 전환! 배열에 1을 약수로 갖는 수, 2를 약수로 갖는 수를 찾자!!
//시간복잡도를 유의하자!!
{
    int c[50001]={};
    int a=0, b=0;
    scanf("%d", &a);
    for(int i=1; i<=a; i++)
    {
        for(int j=i; j<=a; j=j+i)
        {
            c[j]++;
        }
    }
    for(int i=1;i<=a;i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}


//  for(int i=1; i<=a; i++)
//     {
//         for(int j=i; j<=a; j=j+i)
//         {
//             c[j]++;
//         }
//     }
//     for(int i=1;i<=a;i++)
//     {
//         printf("%d ", c[i]);
//     }


//50000이 time limit exceed
    // for(int i=1; i<=a; i++)
    // {
    //     for(int j=i; j>0; j--)
    //     {
    //         if(i%j==0)
    //         {
    //             b++;
    //         }
    //     }
    //     printf("%d ", b);
    //     b=0;
    // }