#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	string ajaira;
	getline(cin,ajaira);
	for(int i=1;i<=x;i++)
	{
		string str;
		getline(cin,str);
		int counter=0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='-'){
				int w=0;
				if((i+1<str.size())&&(str[i+1]=='B'))w++;
				if((i+2<str.size())&&(str[i+2]=='B'))w++;
				if(i+1<str.size()&&str[i+1]=='S')w++;
				if(i-1>=0&&str[i-1]=='S')w++;
				if(w==0)counter++;
			}
		}
		printf("Case %d: %d\n",i,counter);
	}
	return 0;
}