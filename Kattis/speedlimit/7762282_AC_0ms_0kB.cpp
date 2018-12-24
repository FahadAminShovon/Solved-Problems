#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int times;
	while(scanf("%d",&times))
	{
		if(times==-1)
		{
			break;
		}
		else
		{
			int mph[times];
			int hour[times];
			int sum=0;
			for(int count=0;count<times;count++)
			{
				scanf("%d %d",&mph[count],&hour[count]);
			}
			sum=sum+(mph[0]*hour[0]);
			for(int count=1;count<times;count++)
			{
				sum= sum+(mph[count]*(hour[count]-hour[count-1]));
			}
			printf("%d  miles\n",sum);
		}
	}
	return 0;
}