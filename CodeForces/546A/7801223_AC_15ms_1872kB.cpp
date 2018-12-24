#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	int sum=0;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=1;i<=c;i++)
	{
		sum=sum+(a*i);
	}
	int x=sum-b;
	if(sum<b)
	{
		cout<<"0"<<endl;
	}
	else
	{
	cout<<x<<endl;
	}
	return 0;
}