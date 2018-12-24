#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	scanf("%d",&num);
	for(int count=0;count<num;count++)
	{
	
	string a;
	cin>>a;
	int x;
	x=a.size();
	if(x<=10)
	{
		cout<<a<<endl;
	}
	else
	{
		cout<<a[0]<<(x-2)<<a[x-1]<<endl;
	}
	}
	return 0;
}