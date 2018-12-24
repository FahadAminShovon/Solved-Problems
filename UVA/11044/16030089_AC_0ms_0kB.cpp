#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		int a,b;
		sc("%d%d",&a,&b);
		int ans=(a/3)*(b/3);
		cout<<ans<<endl;
	}
	return 0;
}