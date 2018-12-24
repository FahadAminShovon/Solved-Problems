#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string str;
	while(getline(cin,str)){
		if(str=="DONE")break;
		for(int i=0;i<str.size();i++)
		{
			str[i]=toupper(str[i]);
		}
		vector<char>s1;
		vector<char>s2;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]>='A'&&str[i]<='Z')
			{
				s1.push_back(str[i]);
				s2.push_back(str[i]);
			}
		}
		int breaker=0;
		int z=s1.size()-1;
		for(int i=0;i<=z;i++)
		{
			if(s1[i]!=s2[z-i])
			{
				breaker++;
				break;
			}
		}
		if(breaker==0)cout<<"You won't be eaten!\n";
		else cout<<"Uh oh..\n";
	}
	return 0;
}
