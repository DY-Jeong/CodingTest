# include <iostream>

int main()
{
    int n, m, i, sum=0;
    std::cin>>n>>m;//(::는 범위지정 연산자)
    for(i=1; i<=n; i++)
    {
        if(i%m==0)
        {
            sum+=i;
        }
    }
    std::cout<<sum;
    return 0;

}