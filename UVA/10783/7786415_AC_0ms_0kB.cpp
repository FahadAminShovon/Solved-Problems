#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int caseNo =1;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int sum=0;
		for(int check=a;check<=b;check++)
		{
			if(check%2!=0)
			{
				sum=sum+check;
			}
		}
		printf("Case %d: %d\n",caseNo,sum);
	    caseNo++;
	}
	return 0;
}