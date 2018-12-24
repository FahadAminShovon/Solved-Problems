#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;


void solve(int tc){
	int n, avg;
	sc("%d%d",&n,&avg);
	avg=avg*(n+1);
	for(int i=0;i<n;i++){
		int x;
		sc("%d",&x);
		avg-=x;
	}
	pf("Case %d: %d\n",tc,avg);
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=1;i<=n;i++){
		solve(i);
	}
	return 0;
}