#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		//cout<<1<<endl;
		long long int num;
		scanf("%lld",&num);
		double tax=0;
		
    if(num>180000&&num<=(180000+300000))
     tax=(num-180000.0)*0.1;

    else if(num>480000&&num<=880000)
        tax=((num-480000)*0.15)+(300000*.1);

    else if(num>880000&&num<=1180000)
          tax=((num-880000.0)*0.2)+90000.0;

    else if(num>1180000)
       tax=((num-1180000.0)*0.25)+150000.0;
       
	if(tax>0&&tax<2000)
	{
		tax=2000;
	}
	long long int w=ceil(tax);
	//cout<<w<<endl;
	printf("Case %d: %lld\n",i,w);
	}
	return 0;
}