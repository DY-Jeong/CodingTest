#include<iostream>



int main(int argc, char** argv)
{
	char a[20]={};
	scanf("%s", &a);
	for(int i=0; i<20; i++)
	{
		if(char('A')<=a[i]&&a[i]<=char('Z')) printf("%c", a[i]);
	}
	return 0;
}