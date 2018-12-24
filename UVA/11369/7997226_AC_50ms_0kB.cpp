#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int y;
		scanf("%d",&y);
		int num[y];
		for(int j=0;j<y;j++)
		{
			cin>>num[j];
		}
		sort(num,num+y);
		int sum=0;
		for(int k=y-3;k>=0;k-=3)
		{
			sum=sum+num[k];
			//if(k>=y)break;
		}
		cout<<sum<<endl;
	}
	return 0;
}