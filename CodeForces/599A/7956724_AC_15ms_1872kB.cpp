#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x,y,z;
	scanf("%lld%lld%lld",&x,&y,&z);
	long long int a,b,c,d,e,f;
	a=min(x,y);
	b=max(x,y);
	c=min(z,(x+y));
	d=min((a+z),b);
	cout<<a+c+d<<endl;
	return 0;
}