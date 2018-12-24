#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define ub upper_bound
#define lb lower_bound 

using namespace std;

void solve(){
	int n,q;
	sc("%d %d",&n,&q);
	vector<int>v;
	int x;
	for(int i=0;i<n;i++){
		sc("%d",&x);
		v.pb(x);
	}
	
	
	sort(v.begin(),v.end());
	
	for(int i=0;i<q;i++){
		int a,b;
		sc("%d%d",&a,&b);
		int index1=ub(v.begin(),v.end(),a-1)-v.begin();
		int index2=ub(v.begin(),v.end(),b)-v.begin();
		
		int ans = index2-index1;
		pf("%d\n",ans);
	}
	
	
}

int main() {
	int num;
	sc("%d",&num);
	for(int i=1;i<=num;i++){
		pf("Case %d:\n",i);
		solve();
	}
	
	return 0;
}