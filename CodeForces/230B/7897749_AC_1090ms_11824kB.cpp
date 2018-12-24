#include <bits/stdc++.h>
using namespace std;
 
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
int main() {
	prime();
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		long long int a;
		scanf("%lld",&a);
		long long int b=sqrt(a);
		//cout<<a<<endl;*/
		if((b*b==a)&&primeNum[b])
		{
				cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}