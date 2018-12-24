#include <bits/stdc++.h>
#define pb push_back

using namespace std;

const int mx =10000000;
bool prime[mx];

void primeId(){
	memset(prime,true,sizeof(prime));
	
	int n =sqrt(mx);
	
	for(int i=3;i<n;i+=2){
		if(prime[i]){
			for(int j=i*i;j<mx;j+=(2*i)){
				prime[j]=false;
			}
		}
	}
}


vector<int>v;

void pusher(){
	v.pb(2);
	for(int i=3;i<mx;i+=2){
		if(prime[i])v.pb(i);
	}
}

int main() {
	primeId();
	pusher();
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		a--;
		printf("%d\n",v[a]);
	}
	return 0;
}