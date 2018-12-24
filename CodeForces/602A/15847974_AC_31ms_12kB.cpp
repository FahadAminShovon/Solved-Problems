#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;
typedef long long int ll;

ll input(ll a,ll b){
	ll sum=0,num;
	for(int i=0;i<a;i++){
		sc("%lld",&num);
		sum*=b;
		sum+=num;
	}
	return sum;
}

int main() {
	ll a,b;
	sc("%lld%lld",&a,&b);
	ll x = input(a,b);
	sc("%lld%lld",&a,&b);
	ll y = input(a,b);
	//cout<<x<<" "<<y<<endl;
	if(x>y)
		cout << ">" << endl;
	else if(x<y)
		cout << "<" << endl;
	else
		cout << "=" << endl;
	return 0;
}