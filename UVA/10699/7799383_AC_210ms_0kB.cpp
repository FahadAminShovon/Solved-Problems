#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;


bool prime[MAX];
void primeID(){
	int n=sqrt(MAX);
	memset(prime,true,sizeof(prime));
	for(int i=3; i<=n; i+=2){
		if(prime[i]){
			for(int j=i*i;j<MAX;j+=(2*i)){
			prime[j]=false;
			}
		}
	}
}
vector<int> pNum;
void pNumPusher(){
	pNum.push_back(2);
	for(int i=3;i<MAX;i+=2){
		if(prime[i]){
		pNum.push_back(i);
		}
	}
}

int main(){
    primeID();
    pNumPusher();
    int num;
    while(scanf("%d",&num)==1)
    {
    	if(num==0)
    	{
    		break;
    	}
    	vector<int>pDiv;
    	for(int check=0;check<pNum.size();check++)
    	{
    		if(num%pNum[check]==0)
    		{
    			pDiv.push_back(pNum[check]);
    		}
    	}
    	
    	cout<<num<<" : "<< pDiv.size()<<endl;
    	
    }
    return 0;
}