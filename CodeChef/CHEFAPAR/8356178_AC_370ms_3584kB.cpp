#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int a;
		scanf("%d",&a);
		int num[a];
		vector<int>v;
		for(int j=0;j<a;j++)
		{
			cin>>num[j];
			if(num[j]==0)
			{
				v.push_back(j);
			}
			
		}
		v.push_back(-1);
		int sum=0;
		for(int j=0;j<a;j++)
		{
			if(num[j]==0)
			sum=sum+1100;
		}
		if(v[0]!=-1)
		{
		for(int j=v[0];j<a;j++)
		{
			if(num[j]==1)
			sum+=100;
		}
		}
		cout<<sum<<endl;
	}
	return 0;
}