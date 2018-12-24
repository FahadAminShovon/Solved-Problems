#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int total;
		scanf("%d",&total);
		int num;
		scanf("%d",&num);
		int store[num];
		for(int j=0;j<num;j++)
		{
			cin>>store[j];
		}
		int breaker=0;
		for(int j=0;j<num-1;j++)
		{
			for(int k=j+1;k<num;k++)
			{
				//cout<<store[j]<<" "<<store[k]<<endl;
				
				if(store[j]+store[k]==total)
				{
					printf("%d %d\n",j+1,k+1);
					breaker++;
					break;
				}
			}
			if(breaker!=0)
				{
					break;
				}
		}
	}
	return 0;
}