#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main(int argc, char** argv)
{
	int n, a, b, c, sum;
	scanf("%d", &n);
	vector<vector<int> > dist(n+1, vector<int>(n+1, 214700000));
	for(int i=1; i<=n; i++)dist[i][i]=0;
	for(int i=1; i<n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		dist[a][b]=c;
		dist[b][a]=c;
	}
	for(int k=1; k<=n; k++)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(dist[i][j]>dist[i][k]+dist[k][j]) 
				{
					dist[i][j]=dist[i][k]+dist[k][j];
					dist[j][i]=dist[j][k]+dist[k][i];
				}
			}
		}
	}
	for(int i=1; i<=n; i++)
	{
		sum=0;
		for(int j=1; j<=n; j++)
		{
			sum+=dist[i][j];
		}
		printf("%d\n", sum);
	}
	
	return 0;
}

//시간초과 일어남
//DFS+Memoization으로 풀어야 할 듯.