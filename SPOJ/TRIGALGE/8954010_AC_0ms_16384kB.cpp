#include <bits/stdc++.h>
using namespace std;

const double eps=1e-8;

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	double x1=0,x2=c;
	for(int j=0;j<100&&(x1!=x2);j++){
		x1=x2;
		x2=x1- (( a*x1 + b*sin(x1) - c )/ ( a + b*cos(x1) ));
	}
	printf("%.6lf\n",x2);
	}
	return 0;
}