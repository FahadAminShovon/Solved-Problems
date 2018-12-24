#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int caseNo=1;
	for(int i=0;i<x;i++)
	{
		long long int x;
		scanf("%lld",&x);
		long long int y=sqrt(x);
		if(y*y==x)
		{
			printf("Case %d: Yes\n",caseNo++);
		}
		else
		{
			printf("Case %d: No\n",caseNo++);
		}
	}
	return 0;
}