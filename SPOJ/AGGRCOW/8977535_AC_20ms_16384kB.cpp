#include <bits/stdc++.h>
using namespace std;

typedef signed long long ll;
const int mx=1e5+5;
ll f[mx];
ll n,k;
ll func (ll val){
	ll ans =1,temp=f[0];
	for(int i=1;i<n;i++){
		if(f[i]-temp>=val){
			temp=f[i];
			ans++;
			if (ans>=k)return true;
		}
	}
	return false;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld",&n,&k);
		//ll max=0;
		
		for(int j=0;j<n;j++){
		scanf("%lld",&f[j]);
		}
		sort(f,f+n);
		ll lo=f[0],hi=f[n-1]+5,mid;
		
		while(hi-lo>1){
			mid=(lo+hi)/2;
			if(func(mid))lo=mid;
			else hi=mid;
		}
		
		printf("%lld\n",(hi+lo)/2);
	}
	return 0;
}