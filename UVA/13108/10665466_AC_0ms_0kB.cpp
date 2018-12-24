#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef long long int ll;
int main() {
	int num;
	sc("%d",&num);
	for(int i=0;i<num;i++){
		int x;
		sc("%d",&x);
		if(x==1){
			cout<<1<<endl;
			continue;
		}
		if(x==2){
			cout<<2<<endl;
			continue;
		}
		if(x==3){
			cout<<4<<endl;
			continue;
		}
		
		ll n = x;
		
		ll ans =(n-1)*(n-2)*(n*n-(3*n)+12)/24;
		
		cout<<ans+x<<endl;
	}
	return 0;
}