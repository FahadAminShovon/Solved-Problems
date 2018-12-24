#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back

using namespace std;
typedef long long int ll;

int main() {
	
	string str;
	
	vector<string>v;
	
	while(cin>>str){
		v.pb(str);
	}
	
	map<string,int>mp;
	
	int sz=v.size();
	
	for(int i=0;i<sz;i++)mp[v[i]]=1;
	
	for(int i=0;i<sz;i++){
		int szw=v[i].size();
		for(int j=1;j<szw;j++){
			string a =v[i].substr(0,j);
			string b =v[i].substr(j,szw);
			
			if(mp[a]==1&&mp[b]==1){
				cout<<v[i]<<endl;
				break;
			}
		}
	}
	
	
	return 0;
}