#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;
typedef long long int ll;

int main() {
	int n;
	sc("%d",&n);
	ll a;
	vector<long long int>arr;
	for(int i=0;i<n;i++){
		scanf("%lld",&a);
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		ll x;
		sc("%lld",&x);
		int ans=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
		cout<<ans<<endl;
	}
	return 0;
}