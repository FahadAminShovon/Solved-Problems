#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef long long int ll;


int main() {
	
	ll a,b;
	sc("%lld%lld",&a,&b);
	if(a==b)cout<<a<<endl;
	else if(b-a==1)cout<<2<<endl;
	else if((b-a)==3&&(a%3)==0&&(b%3)==0)cout<<3<<endl;
	else cout<<2<<endl;
	
	
	return 0;
}