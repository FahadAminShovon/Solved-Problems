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
		if(a<b)cout<<"<"<<endl;
		else if(a>b)cout<<">"<<endl;
		else cout<<"="<<endl;
	}
	return 0;
}