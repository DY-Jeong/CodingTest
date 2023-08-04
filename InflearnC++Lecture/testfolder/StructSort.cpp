#include<bits/stdc++.h>
using namespace std;
struct Loc
{
    int x, y, z;
    Loc(int a, int b, int c)
    {
        x=a, y=b, z=c;
    }
    bool operator<(Loc XY)
    {
        if(x!=XY.x) return x<XY.x;
        if(y!=XY.y) return y<XY.y;
        if(z!=XY.z) return z<XY.z;
    }
};

int main()
{
    vector<Loc> XZ;
    XZ.push_back(Loc(1, 2, 3));
    XZ.push_back(Loc(1, 3, 7));
    XZ.push_back(Loc(2, 1, 3));
    XZ.push_back(Loc(2, 5, 4));
    XZ.push_back(Loc(2, 3, 6));
    XZ.push_back(Loc(2, 3, 1));
    XZ.push_back(Loc(3, 2, 3));
    XZ.push_back(Loc(3, 2, 2));
    XZ.push_back(Loc(3, 6, 2));
    sort(XZ.begin(), XZ.end());
    for(auto var : XZ) cout<<"X :"<<var.x<<" Y :"<<var.y<<" Z:"<<var.z<<endl;

    return 0;


}