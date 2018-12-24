#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin>>a;
	string b;
	cin>>b;
	 int x=a.size();
	for(int i=0;i<x;i++)
	{
	a[i]=toupper(a[i]);
	b[i]=toupper(b[i]);
	
	}
			if(a>b)
			{
				cout<<1<<endl;
			}
			else if(a==b)
			{
				cout<<0<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		
	return 0;
}