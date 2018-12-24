#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
typedef long long int ll;

int main() {
	int n;
	sc("%d",&n);
	while(n--){
		ll a,b;
		sc("%d%d",&a,&b);
		ll ans=(b*(b+1))/2;
		ll ansO=b*b;
		ll ansE=(ansO+b);
		pf("%d %d %d %d\n",a,ans,ansO,ansE);
	}
	return 0;
}