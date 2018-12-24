#include <bits/stdc++.h>
using namespace std;

int check (int x){
	stringstream ssd;
	ssd<<x;
	string s;
	ssd>>s;
	int checker=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='7'||s[i]=='4')
		{
			checker++;
			break;
		}
	}
	return checker;
}


int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		long long int a;
		int counter=0;
		scanf("%lld",&a);
		for(int j=1;j<=sqrt(a);j++)
		{
			 int checker;
			if(j!=sqrt(a)&&(a%j==0))
			{
				checker=check(j);
				counter=counter+checker;
				checker=check(a/j);
				counter=counter+checker;
				}
			else if(j==sqrt(a)&&(a%j==0))
			{
			  checker=check(j);
				counter=counter+checker;
			}
		}
		cout<<counter<<endl;
	}
	return 0;
}