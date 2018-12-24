#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x;
	while(scanf("%lld",&x)==1)
	{
		if(x==0)
		{
			break;
		}
		long long int a=sqrt(x);
		long long int b=a*a;
		if(x!=b)
		{
			cout<<"no\n";
		}
		else
		{
			cout<<"yes\n";
		}
	}
	return 0;
}