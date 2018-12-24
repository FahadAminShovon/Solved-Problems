#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back

using namespace std;

int bigmod(int num,int pow,int mod){
    if(pow==0)return 1;
    if(pow%2==0){
        int ret=bigmod(num,pow/2,mod);
        return ((ret%mod)*(ret%mod))%mod;
    }
    return ((num%mod)*(bigmod(num,pow-1,mod))%mod)%mod;
}

int main()
{
    int num,pow,mod;
    while(sc("%d%d%d",&num,&pow,&mod)==3){
        pf("%d\n",bigmod(num,pow,mod));
    }
    return 0;
}
