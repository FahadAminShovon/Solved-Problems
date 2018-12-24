#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	vector<int>v;
	int a=0;
	for(int i=0;i<x;i++)
	{
		scanf("%d",&a);
		v.push_back(a);
	}
	for(int i=0;i<x;i++)
	{
		while(v[i]%2==0)
		{
			v[i]=v[i]/2;
		}
		while(v[i]%3==0)
		{
			v[i]=v[i]/3;
		}
	}
	int breaker=0;
	for(int i=1;i<x;i++)
	{
		if(v[i]!=v[0])
		{
			breaker++;
			break;
		}
	}
	if(breaker==0)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}