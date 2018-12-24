#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;

int stringtoInt(string str){
	stringstream ss;
	ss<<str;
	int num;
	ss>>num;
	return num;
}


int riverseNum(string str){
	int sz=str.size();
	string ss="";
	for(int i=sz-1;i>=0;i--){
		ss+=str[i];
	}
	int num=stringtoInt(ss);
	return num;
}

void solve(){
	
	string a,b;
	cin>>a>>b;
	int sum= riverseNum(a)+riverseNum(b);
	stringstream ss;
	ss<<sum;
	string x;
	ss>>x;
	sum=riverseNum(x);
	cout<<sum<<endl;
	
}


int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}