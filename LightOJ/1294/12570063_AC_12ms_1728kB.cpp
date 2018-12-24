#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;

typedef long long int ll;

int arr[10005];

int main() {
	ll sum=0;
	
	/*for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}*/
	
	int n;
	sc("%d",&n);
	for(ll j=1;j<=n;j++){
		ll a,b;
		sc("%lld%lld",&a,&b);
		sum=(a*b)/2;;
		
		
		pf("Case %lld: %lld\n",j,sum);
		
	}
}