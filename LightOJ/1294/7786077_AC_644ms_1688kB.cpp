#include <bits/stdc++.h>
using namespace std;

int main() {
	int caseNo=1;
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		long long int n,m;
		cin>>n;
		cin>>m;
		long long int sum = m*n/2;
		printf("Case %d: %lld\n",caseNo,sum);
		caseNo++;
	}
	return 0;
}