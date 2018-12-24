#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int caseNo=1;
	for(int i=0;i<x;i++)
	{
		int a;
		scanf("%d",&a);
		int counter=0;
		while(a>0)
		{
			if(a%2!=0)
			{
				counter++;
			}
			a=a/2;
		}
		if(counter%2!=0)
		{
			printf("Case %d: odd\n",caseNo++);
		}
		else
		{
			printf("Case %d: even\n",caseNo++);	
		}
	}
	return 0;
}