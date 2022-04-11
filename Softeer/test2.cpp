#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(int argc, char** argv)
{
	int N, i, t,swa, swb, swc, swd;
	char w;
	vector<int> A, B, C, D;
	scanf("%d", &N);
	for(i=0; i<N; i++)
	{
		scanf("%d %c", &t, &w);
		switch((int)w)
		{
			case char('A'):
				A.push_back(t);
				continue;
			case char('B'):
				B.push_back(t);
				continue;
			case char('C'):
				C.push_back(t);
				continue;
			case char('D'):
				D.push_back(t);
				continue;
		}
	}
	for(i=0; i<N; i++)
	{
		swa=swb=swc=swd=0;
		if(!A.empty())
		{
			if(D.empty()||A[0]<D[0])
			{
				printf("%d\n", A[0]);
				swa=1;
			}
			else if(A[0]==D[0]) A[0]+=1;
		}
		if(!D.empty())
		{
			if(C.empty()||D[0]<C[0])
			{
				printf("%d\n", D[0]);
				swd=1;
			}
			else if(D[0]==C[0]) D[0]+=1;
		}
		if(!C.empty())
		{
			if(B.empty()||C[0]<B[0])
			{
				printf("%d\n", C[0]);
				swc=1;
			}
			else if(C[0]==B[0]) C[0]+=1;
		}
		if(!B.empty())
		{
			if(A.empty()||B[0]<A[0])
			{
				printf("%d\n", B[0]);
				swb=1;
			}
			else if(B[0]==A[0]) B[0]+=1;
		}
		if(swa==1) A.erase(A.begin());
		if(swb==1) B.erase(B.begin());
		if(swc==1) C.erase(C.begin());
		if(swd==1) D.erase(D.begin());
		if(!A.empty()&&!B.empty()&&!C.empty()&&!D.empty())
		{
			if(A[0]==B[0]&&B[0]==C[0]&&C[0]==D[0]) break;
		}
	}
	for(i=A.size()+B.size()+C.size()+D.size(); i>0; i--)
	{
		printf("-1\n");
	}

	return 0;
}