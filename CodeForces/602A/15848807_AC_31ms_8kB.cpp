#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;
typedef long long int ll;

ll input(ll a,ll b){
	ll sum=0,num;
	ll mul=powl(b,a-1);
	for(int i=0;i<a;i++){
		sc("%lld",&num);
		ll temp=num*mul;
		sum+=temp;
		mul/=b;
	}
	return sum;
}

int main() {
	ll a,b;
	sc("%lld%lld",&a,&b);
	ll x = input(a,b);
	sc("%lld%lld",&a,&b);
	ll y = input(a,b);
	if(x>y)
		cout << ">" << endl;
	else if(x<y)
		cout << "<" << endl;
	else
		cout << "=" << endl;
	return 0;
}