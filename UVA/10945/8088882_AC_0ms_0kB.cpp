#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	while(getline(cin,str))
	{
		if(str=="DONE")
		{
			break;
		}
		vector<string>abc;
		string a;
		for(int i=0;i<str.size();i++)
		{
			if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			a=toupper(str[i]);
			//cout<<a<<endl;
			abc.push_back(a);
			}
		}
		
		int breaker=0;
		for(int i=0;i<abc.size();i++)
		{
			if(abc[i]!=abc[abc.size()-1-i])
			{
				breaker++;
				break;
			}
		}
		if(breaker==0)
		{
			cout<<"You won't be eaten!"<<endl;
		}
		else
		{
			cout<<"Uh oh.."<<endl;
		}
	}
	return 0;
}