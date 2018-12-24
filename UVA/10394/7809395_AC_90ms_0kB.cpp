#include <bits/stdc++.h>
using namespace std;

bool primeNum[20000000];
void prime(){
    memset(primeNum,true,sizeof(primeNum));
     int n = sqrt(20000000);
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
    for(int i = 3;i<=20000000;i += 2){
        if(primeNum[i]){
            pNum.push_back(i);
        }
    }
}

vector<int> numOne;
vector<int> numTwo;
void solve(){
	int x=pNum.size();
	for(int i=1;i<x-1;i++)
	{
		if(pNum[i]-pNum[i-1]==2)
		{
			numOne.push_back(pNum[i]);
			numTwo.push_back(pNum[i-1]);
		}
	}
}


int main() {
	prime();
	pusher();
	solve();
	int x;
	while(scanf("%d",&x)==1)
	{
		printf("(%d, %d)\n",numTwo[x-1],numOne[x-1]);
	}
	return 0;
}