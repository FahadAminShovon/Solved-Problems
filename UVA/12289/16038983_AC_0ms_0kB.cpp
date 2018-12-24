#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;


void solve(){
	string str;
	cin>>str;
	int sz = str.size();
	if(sz==5)cout<<3<<endl;
	else{
		if((str[0]=='o'&&str[1]=='n')||(str[0]=='o'&&str[2]=='e')||(str[1]=='n'&&str[2]=='e'))cout<<1<<endl;
		else cout<<2<<endl;
	}
}

int main() {
	int n;
	sc("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}