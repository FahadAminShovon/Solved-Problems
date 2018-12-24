#include <bits/stdc++.h>
using namespace std;
int decimalToBinay(int n);


int main() {
	int times;
	scanf("%d",&times);
	int a,b,c,d;
    int m,n,o,p;
    int s,t,u,v;
	int caseNo=1;
	for(int i=0;i<times;i++)
	{
		scanf("%d.%d.%d.%d",&a,&b,&c,&d);
		s=decimalToBinay(a);
		t=decimalToBinay(b);
		u=decimalToBinay(c);
		v=decimalToBinay(d);
		scanf("%d.%d.%d.%d",&m,&n,&o,&p);
		if(s==m&&t==n&&u==o&&v==p)
		{
			printf("Case %d: Yes\n",caseNo++);
		}
		else
		{
			printf("Case %d: No\n",caseNo++);
		}
	}
	return 0;
}


int decimalToBinay(int n)
{
	int remain=0;
	int i=1;
	int binary=0;
	while(n!=0)
	{
		remain=n%2;
		n=n/2;
		binary+=remain*i;
		i=i*10;
	}
	return binary;
}