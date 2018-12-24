#include <bits/stdc++.h>
using namespace std;

typedef signed long long ll;
const int mx=5e6+5;
ll f[mx];

ll func (ll val,int n){
	ll ans =0,temp=0;
	for(int i=0;i<n;i++){
		if(f[i]%val==0)temp=f[i]/val;
		else temp=(f[i]/val)+1;
		ans+=temp;
	}
	return ans;
}

int main() {
	ll n,k;
		while(scanf("%lld%lld",&n,&k)==2&&(n!=-1&&k!=-1)){
		ll max=0;
		
		for(int j=0;j<n;j++){
		scanf("%d",&f[j]);
		if(max<f[j]) max=f[j];
		}
		ll lo=0,hi=max+5,mid;
		
		while(hi-lo>1){
			mid=(lo+hi)/2;
			if(func(mid,n)>k)lo=mid;
			else hi=mid;
		}
		
		printf("%lld\n",hi);
	}
	return 0;
}