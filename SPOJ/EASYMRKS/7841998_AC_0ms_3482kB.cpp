#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int counter=1;
	for(int i=0;i<x;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int num[a];
		int sum=0;
		for(int j=0;j<a;j++)
		{
			cin>>num[j];
			sum=sum+num[j];
		}
		int ans=(b*(a+1))-sum;
		printf("Case %d: %d\n",counter++,ans);
	}
	return 0;
}