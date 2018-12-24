#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;;
	cin>>str;
	
	int sz = str.size();
	
	if(sz==1){
		if((str[0]-'0')%4==0)cout<<4<<endl;
		else cout<<0<<endl;
	}
	else
	{
		int x = (str[sz-1]-'0')+(str[sz-2]-'0')*10;
		if(x%4==0)cout<<4<<endl;
		else cout<<0<<endl;
	}
	
	return 0;
}