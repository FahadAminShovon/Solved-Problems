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
		for(int j = 0;j<a;j++)
		{
			cin>>num[j];
		}
		sort(num,num+a);
		int sum=abs(num[a-1]-num[0])*2;
		/*for(int j=0;j<a-1;j++)
		{
			sum=sum+abs(num[j]-num[j+1]);
		}*/
		cout<<sum<<endl;
	}
	return 0;
}