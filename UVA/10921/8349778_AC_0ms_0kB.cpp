#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string str;
	while(getline(cin,str))
	{
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='A'||str[i]=='B'||str[i]=='C')
			{
				cout<<"2";
			}
			else if(str[i]=='D'||str[i]=='E'||str[i]=='F')
			{
				cout<<"3";
			}
			else if(str[i]=='G'||str[i]=='H'||str[i]=='I')
			{
				cout<<"4";
			}
			else if(str[i]=='J'||str[i]=='K'||str[i]=='L')
			{
				cout<<"5";
			}
			else if(str[i]=='M'||str[i]=='N'||str[i]=='O')
			{
				cout<<"6";
			}
			else if(str[i]=='Q'||str[i]=='R'||str[i]=='S'||str[i]=='P')
			{
				cout<<"7";
			}
			else if(str[i]=='T'||str[i]=='U'||str[i]=='V')
			{
				cout<<"8";
			}
			else if(str[i]=='W'||str[i]=='X'||str[i]=='Y'||str[i]=='Z')
			{
				cout<<"9";
			}
			else
			{
				cout<<str[i];
			}
		}
		cout<<"\n";
	}
	return 0;
}