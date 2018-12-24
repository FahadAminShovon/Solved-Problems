#include <bits/stdc++.h>
using namespace std;
bool primeNum[10000000];
void prime(){
	memset(primeNum,true,sizeof(primeNum));
	 //setting all values into true
	int n=sqrt(10000000);
	for(int i=2;i<=n;i++)
	{
		if(primeNum[i==true])
		{
		   for(int j=i*i;j<=10000000;j+=i)
		  {
			primeNum[j]=false;
		  }
		}
	}
	primeNum[0]=false;
	primeNum[1]=false;
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

vector<long long int>store;
void fibo(){
	store.push_back(0);
	store.push_back(0);
	long long int sum=0;
	for(int h=2;h<=10000000;h++)
	{
		if(h%2==0)
		{
			sum=sum+2;
		}
		else if(primeNum[h]==true)
		{
			sum=sum+h;
		}
		else 
		{
			for(int j=0;j<=pNum.size();j++)
			{
				if(h%pNum[j]==0)
				{
				sum=sum+pNum[j];
				break;
				}
			}
		}
		store.push_back(sum);
	}

}



int main() {
	prime();
	pusher();
	fibo();
	int num;
	scanf("%d",&num);
	while(num>0)
	{
		int n;
		scanf("%d",&n);
		cout<<store[n]<<endl;
		num--;
	}
	return 0;
}