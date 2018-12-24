#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int Z,I,M,L;
	int counter=1;

	while(scanf("%lld%lld%lld%lld",&Z,&I,&M,&L)==4){
		if(Z==0&&I==0&&M==0&&L==0)break;
		int arr[10000000];
	    memset(arr,0,sizeof(arr));
		long long int ans=0;
		long long int z=0;
		long long int w=L;
		while(true){
		ans=(Z*L+I)%M;
		arr[ans]++;
		if(arr[ans]==2)break;
		L=ans;
		//cout<<L<<endl;
		z++;
		}
		
		printf("Case %d: %lld\n",counter,z);
		counter++;
	}
	return 0;
}