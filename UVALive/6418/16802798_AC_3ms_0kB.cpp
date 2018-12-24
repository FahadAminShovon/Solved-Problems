#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

int main() {
	int a,b,m;
	while(sc("%d%d%d",&a,&b,&m)==3){
		for(int i=m;i>=1;i--){
			if((a%i)==(b%i)){
				pf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}