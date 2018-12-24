#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int a;
		int b;
		scanf("%d %d",&a,&b);
		int chock[a];
		int sum=0;
		for(int i=0;i<a;i++)
		{
			cin>>chock[i];
			if(chock[i]>=b)
			{
				sum=sum+(chock[i]/b);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}