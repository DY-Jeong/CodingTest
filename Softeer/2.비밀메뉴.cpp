#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int m, n, k, i,j, tmp, cnt, max=-99999999;
	vector<int> mlist, nlist;
	scanf("%d %d %d", &m, &n, &k);
	if(n<m)
	{
		printf("normal");
		exit(0);
	}
	for(i=0;i<m; i++)
	{
		scanf("%d", &tmp);
		mlist.push_back(tmp);
	}
	for(i=0;i<n; i++)
	{
		scanf("%d", &tmp);
		nlist.push_back(tmp);
	}
	for(i=0; i<=n-m; i++)
	{
		cnt=0;
		for(j=0; j<mlist.size();j++)
		{
			if(mlist[j]-nlist[j]==0) cnt++;
		}
		if(max<cnt)max=cnt;
		nlist.erase(nlist.begin());
	}
	if(max==mlist.size())printf("secret");
	else(printf("normal"));


	return 0;
}