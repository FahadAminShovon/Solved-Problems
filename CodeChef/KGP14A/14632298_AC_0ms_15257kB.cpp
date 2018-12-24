#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
using namespace std;

int main() {
	int n;
	sc("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		sc("%d",&x);
		vector<int>a;
		vector<int>b;
		
		int w;
		for(int i=0;i<x;i++){
			sc("%d",&w);
			a.pb(w);
		}
		
		for(int i=0;i<x;i++){
			sc("%d",&w);
			b.pb(w);
		}
		
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		
		int sum = 0;
		
		for(int i=0;i<x;i++){
			sum+=abs(a[i]-b[i]);
		}
		
		pf("Case %d: %d\n",i,sum);
		
		
	}
	return 0;
}