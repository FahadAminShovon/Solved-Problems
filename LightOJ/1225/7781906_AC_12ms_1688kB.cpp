#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int caseNo=1;
	scanf("%d",&x);
	for(int counter=0;counter<x;counter++)
	{
		char num[15];
		int breaker=0;
		scanf("%s",num);
		int y=strlen(num);
		if (y==1)
		{
			printf("Case %d: Yes\n",caseNo);
		}
		else
		{
			
		for(int i=0;i<y;i++)
		{
			if(num[i]!=num[y-i-1])
			{
				breaker++;
				break;
			}
		}
		if(breaker==0)
		{
        	printf("Case %d: Yes\n",caseNo);
		}
		else
		{
			printf("Case %d: No\n",caseNo);	
		}
		}
		caseNo++;
	}
	return 0;
}