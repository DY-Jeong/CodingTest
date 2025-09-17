#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, res;
    cin>>n;
    vector<int> a(n, 0);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    res = a[n-1]-a[0];
    cout<<res;
    return 0;

}