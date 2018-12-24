#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int can_win(int n){
	return(n%10) ;
}

int main() {
	ll num;
	scanf("%lld",&num);
	int x=can_win(num);
	if(x)printf("1\n%d\n",x);
	else printf("2\n");
	return 0;
}