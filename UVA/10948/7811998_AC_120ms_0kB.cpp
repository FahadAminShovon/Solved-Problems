#include <bits/stdc++.h>
using namespace std;

bool pNum[1000005];
void primeChecker(){
	memset(pNum,true,sizeof(pNum));
	int n=sqrt(1000005);
	for(int i=2;i<=n;i++)
	{
		if(pNum[i==true])
		{
		   for(int j=i*i;j<=1000005;j+=i)
		  {
			pNum[j]=false;
		  }
		}
	}
	pNum[0]=false;
	pNum[1]=false;
}



int main() {
	primeChecker();
	int num;
	while(scanf("%d",&num)==1)
	{
		if(num==0)
		{
			break;
		}
		int lastPrime;
		if(num%2==0)
		{
			lastPrime=num-1;
		}
		else
		{
			lastPrime=num-2;
		}
		
		if(pNum[num-2]==true)
		{
			printf("%d:\n%d+%d\n",num,2,num-2);
			continue;
		}
		
		int x=0;
		
		while(num-lastPrime<=lastPrime)
		{
			if(pNum[lastPrime]&&pNum[num-lastPrime])
			{
			 printf("%d:\n%d+%d\n",num,num-lastPrime,lastPrime);
			 x++;
			 break;
			}
			
			lastPrime-=2;
		}
		if(x==0)
		{
			printf("%d:\nNO WAY!\n",num);
		}
	}
	return 0;
}