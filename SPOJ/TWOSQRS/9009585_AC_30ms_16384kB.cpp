#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int main() {
	int test;
	scanf("%d",&test);
	while(test--){
		ll num;
		scanf("%lld",&num);
		ll r=sqrt(num),i=0;
		while(r>=0){
		if(i*i>num){
			printf("No\n");
			break;
		}
		else if(i*i+r*r==num){
			printf("Yes\n");
			break;
		}
		else if(i*i+r*r>num) r--;
		else i++;
	}
	}
	return 0;
}