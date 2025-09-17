
#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> A, B, C, D;
	int i, t,n, nowtime=2147000000, prevtime, swa, swb,swc, swd;
	char w;
	scanf("%d", &n);
	for(i=0; i<n;i++)
	{
		scanf("%d %c", &t, &w);
		if(w=='A')A.push_back(t);
		if(w=='B')B.push_back(t);
		if(w=='C')C.push_back(t);
		if(w=='D')D.push_back(t);
	}
	if(!A.empty()&&A.front()<nowtime)nowtime=A.front();
	if(!B.empty()&&B.front()<nowtime)nowtime=B.front();
	if(!C.empty()&&C.front()<nowtime)nowtime=C.front();
	if(!D.empty()&&D.front()<nowtime)nowtime=D.front();

	while(!A.empty()||!B.empty()||!C.empty()||!D.empty())
	{
		swa=swb=swc=swd=0;
		if(!A.empty()&&!B.empty()&&!C.empty()&&!D.empty()&&A[0]==B[0]&&A[0]==C[0]&&A[0]==D[0])
		{
			for(i=0; i<A.size()+B.size()+C.size()+D.size(); i++)
			{
				printf("-1\n");
			}
			exit(0);
		}
		if(!A.empty())
		{
			if(D.empty()||D.front()>A.front())
			{
				if(nowtime<=A.front())
				{
					printf("%d\n",A.front());
				}
				else printf("%d\n",nowtime);
				
				swa=1;
			}
			else if(D.front()==A.front())A[0]+=1;
		}
		if(!D.empty())
		{
			if(C.empty()||C.front()>D.front())
			{
				if(nowtime<=D.front())
				{
					printf("%d\n",D.front());
				}
				else printf("%d\n",nowtime);
				swd=1;
			}
			else if(D.front()==C.front()) D[0]+=1;
		}
		if(!C.empty())
		{
			if(B.empty()||B.front()>C.front())
			{
				if(nowtime<=C.front())
				{
					printf("%d\n",C.front());
				}
				else printf("%d\n",nowtime);
				swc=1;
			}
			else if(C.front()==B.front()) C[0]+=1;
		}
		if(!B.empty())
		{
			if(A.empty()||A.front()>B.front())
			{
				if(nowtime<=B.front())
				{
					printf("%d\n",B.front());
				}
				else printf("%d\n",nowtime);
				swb=1;
			}
			else if(B.front()==A.front()) B[0]+=1;
		}

		if(swa==1)A.erase(A.begin());
		if(swb==1)B.erase(B.begin());
		if(swc==1)C.erase(C.begin());
		if(swd==1)D.erase(D.begin());
		nowtime++;
	}
	

	return 0;
}




// #include<iostream>
// #include<queue>
// #include<algorithm>
// #include<vector>

// using namespace std;

// int main(int argc, char** argv)
// {
// 	vector<int> A, B, C, D;
// 	int i, t,n, nowtime=2147000000, prevtime, swa, swb,swc, swd;
// 	char w;
// 	scanf("%d", &n);
// 	for(i=0; i<n;i++)
// 	{
// 		scanf("%d %c", &t, &w);
// 		if(w=='A')A.push_back(t);
// 		if(w=='B')B.push_back(t);
// 		if(w=='C')C.push_back(t);
// 		if(w=='D')D.push_back(t);
// 	}
// 	if(!A.empty()&&A.front()<nowtime)nowtime=A.front();
// 	if(!B.empty()&&B.front()<nowtime)nowtime=B.front();
// 	if(!C.empty()&&C.front()<nowtime)nowtime=C.front();
// 	if(!D.empty()&&D.front()<nowtime)nowtime=D.front();

// 	while(!A.empty()||!B.empty()||!C.empty()||!D.empty())
// 	{
// 		swa=swb=swc=swd=0;
// 		if(!A.empty()&&!B.empty()&&!C.empty()&&!D.empty()&&A[0]==B[0]&&A[0]==C[0]&&A[0]==D[0])
// 		{
// 			for(i=0; i<A.size()+B.size()+C.size()+D.size(); i++)
// 			{
// 				printf("-1\n");
// 			}
// 			exit(0);
// 		}
// 		if(!A.empty())
// 		{
// 			if(D.empty()||D.front()>A.front())
// 			{
// 				printf("%d\n",A.front());
// 				swa=1;
// 			}
// 			else if(D.front()==A.front())
// 			{
// 				A[0]+=1;
// 				for(i=0; i<A.size(); i++)
// 				{
// 					if(A[0]==A[i])A[i]=A[0]+1;
// 				}
				
// 			}

// 		}
// 		if(!D.empty())
// 		{
// 			if(C.empty()||C.front()>D.front())
// 			{
// 				printf("%d\n",D.front());
// 				swd=1;
// 			}
// 			else if(D.front()==C.front()) 
// 			{
// 				D[0]+=1;
// 				for(i=0; i<D.size(); i++)
// 				{
// 					if(D[0]==D[i])D[i]=D[0]+1;
// 				}
				
// 			}
			
			
// 		}
// 		if(!C.empty())
// 		{
// 			if(B.empty()||B.front()>C.front())
// 			{
// 				printf("%d\n",C.front());
// 				swc=1;
// 			}
// 			else if(C.front()==B.front())
// 			{
// 				C[0]+=1;
// 				for(i=0; i<C.size(); i++)
// 				{
// 					if(C[0]==C[i])C[i]=C[0]+1;
// 				}
				
// 			}
// 		}
// 		if(!B.empty())
// 		{
// 			if(A.empty()||A.front()>B.front())
// 			{
// 				printf("%d\n",B.front());
// 				swb=1;
// 			}
// 			else if(B.front()==A.front())
// 			{
// 				B[0]+=1;
// 				for(i=0; i<B.size(); i++)
// 				{
// 					if(B[0]==B[i])B[i]=B[0]+1;
// 				}
				
// 			}
// 		}

// 		if(swa==1)A.erase(A.begin());
// 		if(swb==1)B.erase(B.begin());
// 		if(swc==1)C.erase(C.begin());
// 		if(swd==1)D.erase(D.begin());
// 	}
	

// 	return 0;
// }


