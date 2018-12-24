#include <bits/stdc++.h>
#define sc scanf
#define pf printf
typedef long long int ll;

using namespace std;

int main() {
	ll num;
	sc("%lld",&num);
	if(num==0||num==1||num%3==0||((num-1)%3==0&&num%2!=0))pf("yes\n");
	else pf("no\n");
}