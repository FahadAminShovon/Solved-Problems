#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef unsigned long long ull;
int main(){
	
	int w;
	double b;
	sc("%d%lf",&w,&b);
	
	double ans =b;
	if(w<=b-0.5&&w%5==0) ans = b-w-.5;
	
	pf("%.2lf\n",ans);
	
	return 0;
}