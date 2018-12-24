#include <bits/stdc++.h>
#define sc scanf
#define pf printf;
#define pb push_back;

using namespace std;
typedef long long int ll;
void solve(){
    ll l,r,div,ndiv,mx=0;
    sc("%lld%lld",&l,&r);
    //cout<<l<<" "<<r<<endl;
    for(ll i=l;i<=r;i++){
        div=0;
        ll n = sqrt(i);
        for(int j=1;j<=n;j++){
            if(i%j==0){
                div++;
                if(j*j!=i)div++;
            }
        }
        if(div>mx){
            mx=div;
            ndiv=i;
        }
    }
    //cout<<l<<" "<<r<<" "<<mx<<" "<<ndiv<<endl;
    //printf("100\n");
    //cout<<10<<endl;
    printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,r,ndiv,mx);
   //pf("100\n");
}

int main()
{
    int n;
    sc("%d",&n);
    for(int i=0;i<n;i++){
        solve();
    }
    return 0;
}
