#include <bits/stdc++.h>
#define sc scanf
using namespace std;
typedef long long int ll;

ll tobin(ll num){
	string str="";
	if(num==0)return 0;
	while(num>0){
		if(num%2!=0)str="1"+str;
		else str = "0"+str;
		num/=2;
	}
	
	stringstream ssd;
	ssd<<str;
	ll ans;
	ssd>>ans;
	return ans;
}
int main() {
	
	int n;
	sc("%d",&n);
	for(int i=1;i<=n;i++){
	ll a,b,c,d,e,f,g,h;
	sc("%lld.%lld.%lld.%lld",&a,&b,&c,&d);
	sc("%lld.%lld.%lld.%lld",&e,&f,&g,&h);
	a=tobin(a);
	b=tobin(b);
	c=tobin(c);
	d=tobin(d);
	
	string ans="";
	
	if(a==e&&b==f&&c==g&&d==h)ans="Yes";
	else ans="No";
	//cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	//cout<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
	cout<<"Case "<<i<<": "<<ans<<endl;
	}
	return 0;
}