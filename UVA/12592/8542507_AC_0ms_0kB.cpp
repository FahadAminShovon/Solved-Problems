#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	string ajaira;
	getline(cin,ajaira);
	string part1[x];
	string part2[x];
	for(int i=0;i<x;i++)
	{
		string str1,str2;
		getline(cin,str1);
		getline(cin,str2);
		part1[i]=str1;
		part2[i]=str2;
	}
	int y;
	scanf("%d",&y);
	getline(cin,ajaira);
	for(int i=0;i<y;i++){
		string str;
		getline(cin,str);
		//cout<<str<<endl;
		for(int j=0;j<x;j++)
		{
			if(part1[j]==str)cout<<part2[j]<<endl;
		}
	}
	return 0;
}