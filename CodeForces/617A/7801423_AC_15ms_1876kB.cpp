#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int y=0;
	if(x<=5)
	{
		cout<<"1"<<endl;
	}
	else if((x%5==0))
	{
		y=x/5;
		cout<<y<<endl;
	}
	else
	{
		y=(x/5)+1;
		cout<<y<<endl;
	}
	return 0;
}