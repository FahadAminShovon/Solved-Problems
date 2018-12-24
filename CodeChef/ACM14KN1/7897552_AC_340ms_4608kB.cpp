#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		long long int s,e;
		scanf("%lld%lld",&s,&e);
		int a;
		scanf("%d",&a);
		long long int sa[a];
		long long int ea[a];
		for(int j=0;j<a;j++)
		{
			cin>>sa[j];
			//cout<<"sa"<<sa[j]<<endl;
			cin>>ea[j];
			//cout<<"ea"<<ea[j]<<endl;
		}
		int breaker=0;
		for(int j=0;j<a;j++)
		{
			if(max(sa[j],s)<min(ea[j],e))
			{
				breaker++;
				break;
			}
		}
		if(breaker==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}