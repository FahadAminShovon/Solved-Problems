#include <bits/stdc++.h>
using namespace std;

bool primeNum[10000000];
void prime(){
    memset(primeNum,true,sizeof(primeNum));
     int n = sqrt(10000000);
     for(int i = 3;i<=n;i+=2){
        if(primeNum[i]){
        for(int j = i*i;j<n*n;j += 2*i){
            primeNum[j]= false;
        }
        }
     }
}
vector<int> pNum;
void pusher(){
pNum.push_back(2);
    for(int i = 3;i<=10000000;i += 2){
        if(primeNum[i]){
            pNum.push_back(i);
        }
    }
}


int main() {
	prime();
	pusher();
	int x;
	while(scanf("%d",&x)==1)
	{
		//cout<<pNum[x]<<endl;
		if(x==0)
		{
			break;
		}
		int counter=0;
		while(pNum[counter]<=x)
		{
			counter++;
		}
		int breaker=0;
		for(int i=0;i<=counter;i++)
		{
			for(int j=counter;j>=0;j--)
			{
			
				if(pNum[i]+pNum[j]==x)
				{
				printf("%d = %d + %d\n",x,pNum[i],pNum[j]);
				breaker++;
				break;
				}
			}
			if(breaker!=0)
			{
				break;
			}
		}
		if(breaker==0)
		{
			printf("Goldbach's conjecture is wrong.\n");
		}
	}
	return 0;
}