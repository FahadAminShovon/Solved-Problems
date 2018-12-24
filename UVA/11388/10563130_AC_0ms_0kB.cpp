#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int gcd,lcm;
		scanf("%d%d",&gcd,&lcm);
		if(lcm%gcd==0)cout<<gcd<<" "<<lcm<<endl;
		else cout<<"-1\n";
	}
	return 0;
}