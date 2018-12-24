#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int sum=0;
		int sum2=0;
		for(int j=0;j<n;j++)
		{
			int m,t;
			scanf("%d %d",&m,&t);
			if(k>0)
			{
				if(k>=m)
				{
				sum+=m*t;
				}
				else
				{
					sum+=k*t;
				}
			}
			k-=m;
			sum2+=m*t;
		}
		//cout<<sum<<endl;
		cout<<sum2-sum<<"\n";
	}
	return 0;
}