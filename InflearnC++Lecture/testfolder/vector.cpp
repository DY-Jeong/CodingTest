#include<bits/stdc++.h>

using namespace std;

vector<int> a[10];
int f, b, i, j, k, ch[10];
int main()
{
  for(i=0;i<6;i++)
  {
    cin>>j>>k;
    a[j].push_back(k);    
  }
  //a[2].push_back(6);
  //a[2].push_back(8);
  //a[2].push_back(9);
  for(j=0;j<6;j++)
  {
    for (int i = 0; i < a[j].size(); ++i)
    cout << j <<" " <<a[j][i] << endl;
  }
  

}