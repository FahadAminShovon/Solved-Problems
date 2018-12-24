#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;


void solve(int q){
	//cout<<q<<endl;
	int a,b;
	sc("%d%d",&a,&b);
	int x,y;
	for(int i=0;i<q;i++){
		sc("%d%d",&x,&y);
	//	cout<<x<<" "<<y<<endl;
		if(x==a||y==b)pf("divisa\n");
		else if(x>a&&y>b)pf("NE\n");
		else if(x<a&&y>b)pf("NO\n");
		else if(x<a&&y<b)pf("SO\n");
		else pf("SE\n");
	}
	
	
}

int main() {
	int n;
	
	while(sc("%d",&n)==1){
		if(n==0)break;
		solve(n);
	}
	return 0;
}