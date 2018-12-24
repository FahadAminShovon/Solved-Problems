#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
using namespace std;


void solve(int n){
	int mx=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			mx+= __gcd(i,j);
		}
	}
	pf("%d\n",mx);
	
}


int main() {
	int n;
	while(sc("%d",&n)==1){
		if(n==0)break;
		solve(n);
	}
	return 0;
}