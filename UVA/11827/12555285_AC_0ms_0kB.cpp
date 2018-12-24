#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
using namespace std;

vector<int>nums(string str){
	stringstream ssd;
	int x;
	ssd<<str;
	vector<int>store;
	while(ssd>>x){
		store.pb(x);
	}
	return store;
}

void solve(){
	string str;
	getline(cin,str);
	vector<int>num=nums(str);
	int sz= num.size();
	int mx=0;
	for(int i=0;i<sz-1;i++){
		int a=num[i];
		for(int j=i+1;j<sz;j++){
			int b = num[j];
			int c = __gcd(a,b);
			mx=max(mx,c);
		}
	}
	pf("%d\n",mx);
	
}


int main() {
	int n;
	sc("%d",&n);
	string str;
	getline(cin,str);
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}