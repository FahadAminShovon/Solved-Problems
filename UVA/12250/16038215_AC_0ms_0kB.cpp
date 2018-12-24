#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

int main() {
	map<string,string>mp;
	mp["HELLO"]="ENGLISH";
	mp["HOLA"]="SPANISH";
	mp["HALLO"]="GERMAN";
	mp["BONJOUR"]="FRENCH";
	mp["CIAO"]="ITALIAN";
	mp["ZDRAVSTVUJTE"]="RUSSIAN";
	string str;
	int tc=1;
	while(cin>>str){
		if(str=="#")break;
		pf("Case %d: ",tc);
		if(mp.count(str)==0){
			cout<<"UNKNOWN"<<endl;
		}
		else {
			cout<<mp[str]<<endl;
		}
		tc++;
	}
	return 0;
}