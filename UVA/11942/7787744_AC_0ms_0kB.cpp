#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	printf("Lumberjacks:\n");
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int num[10];
		int tNum[10];
		for(int input=0;input<10;input++)
		{
			scanf("%d",&num[input]);
			tNum[input]=num[input];
		}
		sort(tNum,tNum+10);
		
		int breaker=0;
		if(num[0]==tNum[0])
		{
			for(int check=0;check<9;check++)
			{
				if(!(num[check]<num[check+1]))
				{
					breaker++;
					break;
				}
			}
			if(breaker!=0)
			{
				printf("Unordered\n");
			}
			else
			{
				printf("Ordered\n");
			}
		}
		else if(num[0]==tNum[9])
		{
			for(int check=0;check<9;check++)
			{
				if(!(num[check]>num[check+1]))
				{
					breaker++;
					break;
				}
			}
			if(breaker!=0)
			{
				printf("Unordered\n");
			}
			else
			{
				printf("Ordered\n");
			}			
		}
		else
		{
				printf("Unordered\n");
		}
	}
	return 0;
}