#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

int main() {
	int n;
	int tc=1;
	while(sc("%d",&n)==1){
		if(n==0)break;
		pf("Case %d: ",tc++);
		int given=0;
		int shouldGive=0;
		for(int i=0;i<n;i++){
			int x;
			sc("%d",&x);
			if(x<=0)given++;
			else shouldGive++;
		}
		cout<<shouldGive-given<<endl;
	}
	return 0;
}