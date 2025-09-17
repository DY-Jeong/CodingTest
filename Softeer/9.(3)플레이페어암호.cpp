#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

struct PFC
{
	char k;
	int x, y;
	PFC(char a, int b, int c)
	{
		k=a;
		x=b;
		y=c;
	}
};

int main(int argc, char** argv)
{
	char alpha[100]={}, key[101], message[1001];
	int i, j, k;
	vector<PFC> keymap;
	queue<char> keylist;
	scanf("%s", &message);
	scanf("%s", &key);
	for(i=0; key[i]!=0; i++)
	{
		if(alpha[(int)key[i]]==1)
		{
			continue;
		}
		else
		{
			keylist.push(key[i]);
			alpha[(int)key[i]]=1;
		}
	}
	for(i=(int)char('A'); i<=(int)char('Z'); i++)
	{
		if(alpha[i]==0&&i!=(int)char('J')) keylist.push((char)i);
	}
	k=0;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			keymap.push_back(PFC(keylist.front(), i, j));
			keylist.pop();
		}
	}
	


	return 0;
}