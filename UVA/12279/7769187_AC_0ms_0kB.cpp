	#include <bits/stdc++.h>
	using namespace std;
	
	int main() {
		
		int x;
		int casea=1;
		while(scanf("%d",&x)==1)
		{
			
			if(x==0)
			{
				break;
			}
			int a[x];
			int treat=0;
			int noTreat=0;
			for(int counter=0;counter<x;counter++)
			{
				cin>>a[counter];
				if(a[counter]>0)
				{
					treat++;
				}
				else
				{
					noTreat++;
				}
			}
		
		int balance=(treat-noTreat);
		
		printf("Case %d: %d\n",casea,balance);
		casea++;
		
		}
		return 0;
	}