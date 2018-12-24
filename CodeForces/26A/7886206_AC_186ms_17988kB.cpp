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
	scanf("%d",&x);
	int checker=0;
	while(pNum[checker]<x)
	{
		checker++;
	}
	
	int counter=0;
	for(int j=1;j<=x;j++)
	{
		int p=0;
	for(int i=0;i<checker-1;i++)
	{
		if(j%pNum[i]==0)
		{
			p++;
		}
	}
	if(p==2)
	{
		counter++;
	}
	}
	cout<<counter<<endl;
	return 0;
}