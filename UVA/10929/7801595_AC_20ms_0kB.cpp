#include <bits/stdc++.h>
using namespace std;

int main() {
	string x;
	int mod11=0;
	while(cin>>x)
	{
		int mod11=0;
		if(x=="0")
		{
			break;
		}
		int l=x.size();
		for(int i=0;i<l;i++)
		{
		mod11=((mod11*10)+(x[i]-'0'))%11;
		}
		if(mod11==0)
		{
			cout<<x<<" is a multiple of 11."<<endl;
		}
		else
		{
			cout<<x<<" is not a multiple of 11."<<endl;
		}
	}
	return 0;
}