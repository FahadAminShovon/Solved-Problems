#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

void solve(){
	int n;
	sc("%d",&n);
	int arr[n][n];
	memset(arr,0,sizeof(arr));
	int cnt=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			arr[j][i-j]=++cnt;
		}
	}
	
	for(int i=1;i<n;i++){
		int xx =0;
		for(int j=n-1;j>=i;j--){
			arr[i+xx][j]=++cnt;
			xx++;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}


int main() {
	int t;
	sc("%d",&t);
	
	for(int i=0;i<t;i++)solve();
	
	return 0;
}