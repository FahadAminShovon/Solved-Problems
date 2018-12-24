#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;


void solve(){
	int n;
	int mn=INT_MAX;
	int mx=-10;
	
	sc("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		int x;
		sc("%d",&x);
		if(x>mx)mx=x;
		if(x<mn)mn=x;
	}
	
	cout<<(mx-mn)*2<<endl;
	
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}