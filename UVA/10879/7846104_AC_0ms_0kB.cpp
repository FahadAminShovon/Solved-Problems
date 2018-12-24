#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int caseNo=1;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int num;
		scanf("%d",&num);
		int a[2];
		int b[2];
		int counter=0;
		for(int j=2;j<=sqrt(num);j++)
		{
			if(num%j==0)
			{
				a[counter]=j;
				b[counter++]=(num/j);
			}
			if(counter==2)
			{
				break;
			}
		}
		
		printf("Case #%d: %d = %d * %d = %d * %d\n",caseNo++,num,a[0],b[0],a[1],b[1]);
	}
	return 0;
}