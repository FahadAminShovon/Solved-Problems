#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int caseNo=1;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int a;
		scanf("%d",&a);
		int boy[a];
		int pen[a];
		int sum=0;
		for(int i=0;i<a;i++)
		{
			cin>>boy[i];
		}
		sort(boy,boy+a);
			for(int i=0;i<a;i++)
		{
			cin>>pen[i];
		}
		sort(pen,pen+a);
		for(int i=0;i<a;i++)
		{
			sum=sum+abs(boy[i]-pen[i]);
		}
		printf("Case %d: %d\n",caseNo++,sum);
	}
	return 0;
}