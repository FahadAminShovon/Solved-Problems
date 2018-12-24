#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		long long int a;
		scanf("%lld",&a);
		long long int m=a*567;
		long long int n=m/9;
		long long int o=n+7492;
		long long int p=o*235;
		long long int q=p/47;
		long long int r=q-498;
		long long int ans=abs(r/10%10);
		
		printf("%lld\n",ans);
	}
	return 0;
}