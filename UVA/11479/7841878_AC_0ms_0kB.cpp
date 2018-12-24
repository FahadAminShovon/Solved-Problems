#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int caseNo=1;
	for(int i=0;i<x;i++){
		long long int a[3];
		cin>>a[0];
		cin>>a[1];
		cin>>a[2];
		sort(a,a+3);
		if((a[0]+a[1]<=a[2])||a[0]<=0||a[1]<=0||a[2]<=0)
		{
			printf("Case %d: Invalid\n",caseNo);
		}
		else if((a[0]==a[1])&&(a[1]==a[2]))
		{
			printf("Case %d: Equilateral\n",caseNo);
		}
		else if((a[0]==a[1])||(a[1]==a[2])||(a[2]==a[0]))
		{
			printf("Case %d: Isosceles\n",caseNo);
		}
		else
		{
			printf("Case %d: Scalene\n",caseNo);
		}
		caseNo++;
	}
	return 0;
}