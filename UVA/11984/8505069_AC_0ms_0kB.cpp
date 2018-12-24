#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		double c,f;
		scanf("%lf%lf",&c,&f);
		double a=(9.0/5)*c+32;
		double sum = a+f;
		double ans=(sum-32)*5.0/9;
		printf("Case %d: %.2lf\n",i,ans);
 
	}
	return 0;
}