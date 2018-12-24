#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int caseNo=1;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int c,d;
		scanf("%d%d",&c,&d);
		double f =(9.0/5*c)+32;
		f=f+d;
		f=(f-32)*5/9;
		printf("Case %d: %.2lf\n",caseNo++,f);
	}
	return 0;
}