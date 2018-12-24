#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;


void solve(){
	string str;
	cin>>str;
	
	int sz=str.size();
	if(sz==1){
		if(str[0]=='1'||str[0]=='4'){
			cout<<"+"<<endl;
			return;
		}
	}
	else if(sz==2){
		if(str=="78"){
			cout<<"+"<<endl;
			return;
		}
	}
	else{
		if(str[sz-1]=='5'&&str[sz-2]=='3'){
			cout<<"-"<<endl;
			return;
		}
		else if(str[0]=='9'&&str[sz-1]=='4'){
			cout<<"*"<<endl;
			return;
		}
		else if(str[0]='1'&&str[1]=='9'&&str[2]=='0'){
			cout<<"?"<<endl;
			return;
		}
	}
	
	cout<<"+"<<endl;
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