#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		char arr[1000];
		scanf("%s",arr);
		int y =strlen(arr);
		
		if(!strcmp(arr,"1")||!strcmp(arr,"4")||!strcmp(arr,"78"))
		{
			printf("+\n");
		}
		else if(arr[y-1]=='5'&&arr[y-2]=='3')
		{
			printf("-\n");
		}
		else if(arr[0]=='9'&&arr[y-1]=='4')
		{
			printf("*\n");
		}
		else
		{
			printf("?\n");
		}
		
	}
	return 0;
}