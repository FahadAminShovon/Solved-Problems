#include <bits/stdc++.h>
#define sc scanf
#define pf printf
int arr[1000005];

using namespace std;


void solve(int cs){
	memset(arr,0,sizeof(arr));
	int n;
	sc("%d",&n);
	int ans = 0;
	for(int i=0;i<n;i++){
		int num;
		sc("%d",&num);
		arr[num]++;
		if(arr[num]==num+1){
			ans+=arr[num];
			arr[num]=0;
		}
	}
	
	for(int i=0;i<1000001;i++){
		if(arr[i])ans+=i+1;
	}
	
	pf("Case %d: %d\n",cs,ans);
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=1;i<=n;i++){
		solve(i);
	}
	return 0;
}