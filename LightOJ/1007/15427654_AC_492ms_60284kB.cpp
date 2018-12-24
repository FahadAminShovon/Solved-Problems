#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
int phi[5000006];
ull sum[5000006];
const int M = 5000000;

void sievephi()
{
    for(int i=2; i<=M; i++)
        phi[i] = i;

    for(int i =2; i<=M; i++)
    {
        if(phi[i]==i)
        {
            for(int j=i; j<=M; j+=i)
                phi[j]-=phi[j]/i;
        }
    }
}

void summer(){
    sum[1]=0;
    for(int i=0;i<=5000000;i++){
        sum[i]=(ull)((ull)phi[i]*(ull)phi[i])+sum[i-1];
    }
}


int main() {
	sievephi();
	summer();
	int n;
	sc("%d",&n);
	for(int i=1;i<=n;i++){
		int a,b;
		sc("%d%d",&a,&b);
		printf("Case %d: %llu\n",i,sum[b]-sum[a-1]);
	}
	return 0;
}
