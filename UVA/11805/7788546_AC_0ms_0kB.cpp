#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	{
		int caseNo=1;
		for(int count=0;count<x;count++)
		{
			int n,k,p;
			scanf("%d %d %d",&n,&k,&p);
			int ans = k+p;
			while(ans>n)
			{
				ans=ans-n;
			}
			printf("Case %d: %d\n",caseNo++,ans);
		}
	}
	return 0;
}