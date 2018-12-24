#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a,b;
	while(scanf("%lld %lld",&a,&b)==2)
	{
		if((a==0)&&(b==0))
		{
			break;
		}
		int carry=0;
		int counter=0;
		int sum=0;
		while((a>0)||(b>0))
		{
			int x=(a%10);
			int y=(b%10);
			sum=carry+x+y;
			if(sum>=10)
			{
				counter++;
			}
			carry=sum/10;
			a=a/10;
			b=b/10;
		}
		if(counter==0)
		{
			printf("No carry operation.\n");
		}
		else if(counter==1)
		{
			printf("1 carry operation.\n");
		}
		else
		{
			printf("%d carry operations.\n",counter);
		}
	}
	return 0;
}