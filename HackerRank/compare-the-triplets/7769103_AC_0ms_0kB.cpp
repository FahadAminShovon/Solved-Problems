#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[3];
	int b[3];
	int x=0;
	int y=0;
	for(int count=0;count<3;count++)
	{
		cin>>a[count];
	}
	for(int count=0;count<3;count++)
	{
		cin>>b[count];
	}
	
	for(int count=0;count<3;count++)
	{
	if(a[count]>b[count])
	{
		x++;
	}
	else if(a[count]<b[count])
	{
		y++;
	}
	}
	cout<<x<<" "<<y<<endl;
	
	return 0;
}