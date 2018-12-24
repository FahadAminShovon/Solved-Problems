#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int counter=0;counter<x;counter++)
	{
		char str[10] ;
		cin>>str;
		int y= strlen(str);
		if (y==5)
		{
			printf("3\n");
		}
		else if((y==3)&&((str[0]=='t'&&str[1]=='w')||(str[0]=='t'&&str[2]=='o')||(str[1]=='w'&&str[2]=='o')))
		{
			printf("2\n");
		}
		else
		{
			printf("1\n");
		}
		
	}
	return 0;
}