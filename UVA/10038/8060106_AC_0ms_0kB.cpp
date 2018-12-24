#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	while(scanf("%d",&x)==1)
	{
		int a[x];
		for(int i=0;i<x;i++)
		{
			cin>>a[i];
		}
		
		int y=x-1;
		int z[y];
		int breaker=0;
		for(int i=0;i<x-1;i++)
		{
			int diff=abs(a[i]-a[i+1]);
			z[i]=diff;
		}
		sort(z,z+y);
		for(int i=0;i<y-1;i++)
		{
			if(z[i]!=z[i+1]-1)
			{
				breaker++;
				break;
			}
			
		}
		
		if(breaker==0)
		{
			cout<<"Jolly"<<endl;
		}
		else
		{
			cout<<"Not jolly"<<endl;
		}
	}
	return 0;
}