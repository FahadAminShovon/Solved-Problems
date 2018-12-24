#include <bits/stdc++.h>
using namespace std;


int zero(int x)
{
	int sum=0;
	int multi=1;
	while(x>0)
	{
		int d=x%10;
		x=x/10;
		if(d!=0)
		{
			sum=sum+(d*multi);
			multi=multi*10;
		}
	}
	return sum;
}

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int c=a+b;
	int x=zero(a);
	int y=zero(b);
	int z=zero(c);
	if(x+y==z)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}