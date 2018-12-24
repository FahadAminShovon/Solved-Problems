#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
	ll m,n;
	scanf("%lld%lld",&m,&n);
	int sum[m+1];
	sum[0]=0;
	for(int i=1;i<=m;i++){
		scanf("%lld",&sum[i]);
		sum[i]=sum[i]+sum[i-1];
	}
	
	int ans =0;
	
	for(int i=0;i<m;i++){
		int lo=i+1;
		int hi=m;
		while(lo<=hi){
			ll mid= (hi+lo)/2;
			if(sum[mid]-sum[i]<=n)lo=mid+1;
			else hi=mid-1;
		}
		
		ans =max((lo-i),ans);
	}
	cout<< ans-1 <<endl;
	
	return 0;
}