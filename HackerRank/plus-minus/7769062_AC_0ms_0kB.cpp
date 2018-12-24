#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int a[x];
	double pos=0;
	double neg=0;
	double zero=0;
	for(int count=0;count<x;count++)
	{
		scanf("%d",&a[count]);
		if(a[count]>0)
		{
			pos++;
		}
		else if(a[count]<0)
		{
			neg++;
		}
		else
		{
			zero++;
		}
	}
	double m=(pos/x);
	double n=(neg/x);
	double o=(zero/x);
	printf("%0.6f\n",m);
    printf("%0.6f\n",n);
    printf("%0.6f\n",o);
	
	return 0;
}