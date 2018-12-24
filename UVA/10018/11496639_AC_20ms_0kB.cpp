#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define fread freopen("input.txt","r",stdin)
#define pii pair<int,int>
#define bs binary_search
#define ub upper_bound
#define lb lower_bound
typedef long long int ll;
using namespace std;

ll rvrs(ll n){
    stringstream ssd;
    ssd<<n;
    string str;
    ssd>>str;

    reverse(str.begin(),str.end());

    stringstream ssr;
    ssr<<str;
    ll num;
    ssr>>num;
    return num;
}

int main()
{
    //fread;
    int tc;
    sc("%d",&tc);
    for(int i=0;i<tc;i++){
        ll n;
        sc("%lld",&n);
        ll nn=rvrs(n);
        int p=0;
        while(n!=nn){
                p++;
            ll sum=n+nn;
            n=sum;
            nn=rvrs(sum);
        }
        cout<<p<<" "<<n<<endl;
    }
    return 0;
}
