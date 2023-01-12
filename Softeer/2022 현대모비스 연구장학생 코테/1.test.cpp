#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int h, m;
    cin>>h>>m;
    if(m-30<0)
    {
        h-=1;
        if(h<0)h+=24;
        m=m-30+60;
    }
    else{
        m-=30;

    }
    cout<<h<<" "<<m;
    return 0;
}