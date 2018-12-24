#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int Mx=1e6+10;
ll store[Mx];
void sqrs(){
	for(ll i=0;i<Mx;i++){
		store[i]=i*i;
	}
}

int main() {
	sqrs();
	int test;
	scanf("%d",&test);
	while(test--){
		ll num,n;
		scanf("%lld",&num);
		int hi=Mx-1,lo=0;
		int counter = 0;
		while(hi>=lo){
			n=store[hi]+store[lo];
			if(n==num){
				counter++;
				break;
			}
			else if(n>num)hi--;
			else lo++;
		}
		if(counter)printf("Yes\n");
		else printf("No\n");
	}
	
	return 0;
}