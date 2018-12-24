#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	int x[6];
	scanf("%d %d %d",&a,&b,&c);
	x[0]=a+(b*c);
	x[1]=a*(b+c);
	x[2]=a*b*c;
	x[3]=(a+b)*c;
	x[4]=(a*b)+c;
	x[5]=a+b+c;
	sort(x,x+6);
	cout<<x[5]<<endl;
	return 0;
}