#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int caseNo=1;
	for(int i=0;i<x;i++)
	{
		
		int a;
		scanf("%d",&a);
		int num[a];
		for(int input=0;input<a;input++)
		{
			scanf("%d",&num[input]);
		}
		int highjump=0;
		int lowjump=0;
		for(int check=0;check<a-1;check++)
		{
			if(num[check]<num[check+1])
			{
				highjump++;
			}
			else if(num[check]>num[check+1])
			{
				lowjump++;
			}
		}
		printf("Case %d: %d %d\n",caseNo++,highjump,lowjump);
		
	}
	return 0;
}