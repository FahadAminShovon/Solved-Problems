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

int t,tc=1,n;

int main()
{

    //fread;
    sc("%d",&t);
    while(t--){
        int a;
        sc("%d",&a);
        int ans=floor(a/2);
        int ans1=a-ans;
        pf("%d %d\n",ans,ans1);
    }

    return 0;
}
