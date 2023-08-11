#include<bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> records[50000];
int max, min, m, n, q, i, j,ch[50000]={}; input;
void DFS(int x)
{
  if(x==n)
    {
      return;
    }
  else
    {
      
    }
}
int main(int argc, char** argv)
{
  cin>>n>>q;
  for(i=0; i<n;i++)
    {
      cin>>input;
      a.push_back(input);
    }
  sort(a.begin(), a.end());
  min=(a[0]+a[1]+a[2])/3;
  max=(a[n]+a[n-1]+a[n-2])/3;

  for(i=0; i<q; i++)
    {
      cin>>input;
      if(input<min or input>max) cout>>"0">>endl;
      else
        {
          cout>>records[input]>>endl;
        }
    }

   return 0;
}

