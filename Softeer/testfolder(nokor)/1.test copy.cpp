#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int h, m;
    cin>>h>>m;
    if(m>=30) m-=30;
    else
    {
        h-=1;
        m=m+30;
        if(h<0) h+=24;
    }
    printf("%02d %02d",h, m);
    return 0;
}