#include<iostream>

using namespace std;
int a1[11][7]={
	{1,1,1,1,1,1,0},
	{0,1,1,0,0,0,0},
	{1,1,0,1,1,0,1},
	{1,1,1,1,0,0,1},
	{0,1,1,0,0,1,1},
	{1,0,1,1,0,1,1},
	{1,0,1,1,1,1,1},
	{1,1,1,0,0,1,0},
	{1,1,1,1,1,1,1},
	{1,1,1,1,0,1,1},
	{0,0,0,0,0,0,0}
	};
int main(int argc, char** argv)
{
	int cs, a, b, cnt,div=10;
	int arra[1000]={}, arrb[1000]={},next[5]={10, 10, 10, 10, 10}, now[5]={10, 10, 10, 10, 10};
	scanf("%d", &cs);
	for(int i=0; i<cs; i++)
	{
		scanf("%d %d", &arra[i], &arrb[i]);
	}
	for(int i=0; i<cs; i++)
	{
		cnt=0;
		int numA = arra[i];
		int numB = arrb[i];
		
		for(int j=4;numA>0; j--)
		{
			now[j]=numA%div;
			numA/=div;
		}
		for(int j=4;numB>0; j--)
		{
			next[j]=numB%div;
			numB/=div;
		}
		for(int j=0; j<5; j++)
		{
			printf("Now (%d) : %d \n",j, now[j]);
			printf("next (%d) : %d \n",j, next[j]);
			for(int k=0; k<7; k++)
			{
				int sw = a1[now[j]][k]-a1[next[j]][k];
				//printf("sw : %d\n", sw);
				if(sw!=0) cnt++;
				//printf("%d\n", cnt);
			}
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}