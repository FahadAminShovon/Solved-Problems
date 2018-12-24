#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sc4(a,b,c,d) scanf("%d,%d,%d,%d",&a,&b,&c,&d)
#define loop(i,n) for(int i=0;i<n;i++)
#define cLoppp(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define all(a) a.begin(),a.end
#define ub upper_bound
#define lb lower_bound
#define bs binary_search
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define pb push_back
#define mp make_pair

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

string lowerCase(string str){
	int sz = str.size();
	for(int i=0;i<sz;i++){
		str[i]=tolower(str[i]);
	}
	return str;
}

int main() {
	string str;
	cin>>str;
	str=lowerCase(str);
	vector<char>v;
	int sz = str.size();
	for(int i=0;i<sz;i++){
		if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y'){
			v.pb(str[i]);
		}
	}
	sz=v.size();
	for(int i=0;i<sz;i++){
		pf(".%c",v[i]);
	}
}