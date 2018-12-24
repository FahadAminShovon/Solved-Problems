#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x;
	while(scanf("%lld",&x))
	{
		if(x==0)
		{
			break;
		}
		int sum=0;
		
		while(true)
	 { 
		
		while(x>0)
		{
			sum=sum+(x%10);
			x=x/10;
		}
		if(sum/10==0)
		{
			break;
		}
		else
		{
			x=sum;
			sum=0;
		}
	 }
	 		printf("%d\n",sum);
	}
	
	return 0;
}