#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;


void solve(int tc){
	int x;
	pf("Case %d: ",tc);
	int counter=0;
	for(int i=0;i<3;i++){
		sc("%d",&x);
		if(x>20&&counter==0){
			pf("bad\n");
			counter++;
		}
	}
	
	if(counter==0)pf("good\n");
}

int main() {
	int n;
	while(sc("%d",&n)==1){
	for(int i=1;i<=n;i++){
		solve(i);
	}
	}
	return 0;
}