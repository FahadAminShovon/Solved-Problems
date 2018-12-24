#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	
	int a,sum;
		a=0;
		sum=0;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		char arr[20];
		scanf("%s",arr);
		
		if(!strcmp(arr,"donate"))
		{
			scanf("%d",&a);
			sum=sum+a;
		}
		else
		{
			printf("%d\n",sum);
		}
	}
	return 0;
}