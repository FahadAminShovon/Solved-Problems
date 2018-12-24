#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	while(scanf("%d",&x)==1)
	{
			int num[x];
			for(int input=0;input<x;input++)
			{
				scanf("%d",&num[input]);
			}
			int modNum[x-1];
			for(int j=0;j<x-1;j++)
			{
				modNum[j]=abs(num[j]-num[j+1]);
			}
			
			sort(modNum,modNum+(x-1));
			int breaker=0;
			
			for(int check=0;check<x-2;check++)
			{
				if(modNum[check]!=(modNum[check+1]-1))
				{
					breaker++;
					break;
				}
			}
			if (breaker==0)
			{
				printf("Jolly\n");
			}
			else
			{
				printf("Not jolly\n");
			}
		
	}
	return 0;
}