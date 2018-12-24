#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;


void solve(){
	int n;
	sc("%d",&n);
	int arr1[n];
	int arr2[n];
	for(int i=0;i<n;i++){
		sc("%d",&arr1[i]);
	}
	for(int j=0;j<n;j++){
		sc("%d",&arr2[j]);
	}
	
	sort(arr1,arr1+n);
	sort(arr2,arr2+n);
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr1[i]*arr2[i];
	}
	
	pf("%d\n",sum);
	
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}