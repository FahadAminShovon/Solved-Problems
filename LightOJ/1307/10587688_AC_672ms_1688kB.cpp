#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
using namespace std;

void solve(int n){
	int num;
	sc("%d",&num);
	vector<int>v;
	for(int i=0;i<num;i++){
		int x;
		cin>>x;
		v.pb(x);
	}
	
	sort(v.begin(),v.end());
	int lo =0;
	int hi=num-1;
	int counter=0;
	for(int i=0;i<num-2;i++){
		for(int j=i+1;j<num-1;j++){
			int st = v[i]+v[j];
			int index=lower_bound(v.begin(),v.end(),st)-v.begin();
			if(index!=0)counter+=index-1-j;
		}
	}
		
	
	
	pf("Case %d: %d\n",n,counter);
}


int main() {
	int num;
	sc("%d",&num);
	for(int i=1;i<=num;i++){
		solve(i);
	}
	return 0;
}