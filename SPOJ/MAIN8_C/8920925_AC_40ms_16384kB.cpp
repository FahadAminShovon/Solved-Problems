#include <iostream>
using namespace std;

typedef signed long long ll;
const int mx=50010;
ll f[mx];

ll func (ll val,int n){
	ll ans =0;
	for(int i=0;i<n;i++){
		ans+=(f[i]/val);
	}
	return ans;
}

int main() {
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		ll n,k;
		scanf("%lld%lld",&n,&k);
		ll max=0;
		
		for(int j=0;j<n;j++){
		scanf("%d",&f[j]);
		if(max<f[j]) max=f[j];
		}
		ll lo=0,hi=max+5,mid;
		
		while(hi-lo>1){
			mid=(lo+hi)/2;
			if(func(mid,n)>=k)lo=mid;
			else hi=mid;
		}
		
		printf("%lld\n",(hi+lo)/2);
	}
	return 0;
}