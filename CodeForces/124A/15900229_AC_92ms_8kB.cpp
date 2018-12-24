#include <bits/stdc++.h>
#define sc scanf
#define pf printf


using namespace std;

int main() {
	int n,a,b;
	sc("%d%d%d",&n,&a,&b);
	
	int left=0;
	int right = 0;
	int counter=0;
	for(int i=1;i<=n;i++){
		left=i-1;
		right=n-i;
		if(left>=a&&right<=b)counter++;
		
	}
	
	cout<<counter<<endl;
	return 0;
}