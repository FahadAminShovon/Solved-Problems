#include <bits/stdc++.h>
using namespace std;

int num(string x)
{
	reverse(x.begin(),x.end());
	stringstream sso;
	sso<<x;
	int ab;
	sso>>ab;
	return ab;
}
	
string numOne(int x)
{
	stringstream sso;
	sso<<x;
	string ab;
	sso>>ab;
	reverse(ab.begin(),ab.end());
	return ab;
}	
int numTwo(string x)
{
	stringstream sso;
	sso<<x;
	int ab;
	sso>>ab;
	return ab;
}

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
	string a,b;
	cin>>a>>b;
	int y,z;
	y=num(a);
	z=num(b);
	int w=z+y;
	string ab=numOne(w);
	int ans=numTwo(ab);
	cout<<ans<<endl;
	
	}
	return 0;
}