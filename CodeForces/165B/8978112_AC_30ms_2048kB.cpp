#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

ll n,k;

bool div(ll val){
	ll ans=0;
	while(val>0){
		ans+=val;
		val=val/k;
	}
	return (ans>=n);
}

int main() {
	scanf("%lld %lld",&n,&k);
	ll hi=n+5,lo=0,mid;
	while(hi-lo>1){
		mid=(hi+lo)/2;
		if(div(mid))hi=mid;
		else lo=mid;
	}
	cout<<hi<<endl;
	return 0;
}