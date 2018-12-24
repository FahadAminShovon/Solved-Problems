#include <iostream>
using namespace std;

int main() {
	long long int x;
	scanf("%lld",&x);
	int check=0;
	while(x>0)
	{
		if(x%1000==144)
		{
			x=x/1000;
		}
		else if(x%100==14)
		{
			x=x/100;
		}
		else if(x%10==1)
		{
			x=x/10;
		}
		else
		{
			check++;
			break;
		}
	}
	if(check!=0)
	{
		cout<<"NO\n";
	}
	else
	{
		cout<<"YES\n";
	}
	return 0;
}