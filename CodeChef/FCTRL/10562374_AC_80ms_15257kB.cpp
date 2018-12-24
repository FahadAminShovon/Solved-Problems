#include <bits/stdc++.h>
#define sc scanf
#define pf rintf

typedef long long int ll;
using namespace std;

ll koyta_zero(ll num){
	ll div=5;
	int sum=0;
	while(div<=num){
		sum+=num/div;
		div*=5;
	}
	return sum;
}

int main() {
	
	int t;
	sc("%d",&t);
	for(int i=0;i<t;i++){
		ll num;
		sc("%lld",&num);
		cout<<koyta_zero(num)<<endl;
	}
	
	return 0;
}