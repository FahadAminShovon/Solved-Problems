#include <bits/stdc++.h>
#define sc scanf
#define pf printf
typedef long long int ll;
using namespace std;

int main() {
	int hay,line;
	sc("%d%d",&hay,&line);
	
	map<string,int>store;
	string word;
	int val;
	for(int i=0;i<hay;i++){
		cin>>word>>val;
		store[word]=val;
	}
	string dec;
	ll sum;
	for(int j=0;j<line;j++){
		sum=0;
		while(cin>>dec&&dec!=".") sum+=store[dec];
		pf("%lld\n",sum);
	}
	
	return 0;
}