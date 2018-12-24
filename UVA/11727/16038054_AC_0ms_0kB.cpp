#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;


void solve(int tc){
	pf("Case %d: ",tc);
	int arr[3];
	for(int i=0;i<3;i++){
		sc("%d",&arr[i]);
	}
	sort(arr,arr+3);
	cout<<arr[1]<<endl;
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=1;i<=n;i++){
		solve(i);
	}
	return 0;
}