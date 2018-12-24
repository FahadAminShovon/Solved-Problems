#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define pii pair<int,int>


using namespace std;
const int mx = 100000080;
typedef long long int ll;
typedef unsigned long long ull;


int main() {
	int num;
	sc("%d",&num);
	string ajaira;
	getline(cin,ajaira);
	
	while(num--){
		string str;
		getline(cin,str);
		int sz = str.size();
		
		//string a = "Simon says ";
		if(str.size()>=11)
		if(str.substr(0,11)=="Simon says ")cout<<str.substr(11,sz-11)<<endl;
		
		//string str1 = str(0,)
	}
	return 0;
}