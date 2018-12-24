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
	while(scanf("%d",&x)&&x)
	{
	unsigned long long int n;
	if(x==31)
	{
		printf("Perfect: 2305843008139952128!\n");
	}
	else if(binary_search(pNum.begin(),pNum.end(),x))
	{
		if(binary_search(pNum.begin(),pNum.end(),(pow(2,x)-1))){
			n=(pow(2,(x-1))*(pow(2,x)-1));
			printf("Perfect: %llu!\n",n);
		}
		else
		{
		 printf("Given number is prime. But, NO perfect number is available.\n");
		}
	}
	else
	{
		printf("Given number is NOT prime! NO perfect number is available.\n");
	}
		}
	return 0;
}