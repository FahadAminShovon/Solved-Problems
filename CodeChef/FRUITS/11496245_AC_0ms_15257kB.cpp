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

using namespace std;

int main()
{
    //fread;
    int tc;
    sc("%d",&tc);
    for(int i=0;i<tc;i++){
        int n,m,k;
        sc("%d%d%d",&n,&m,&k);
        int temp=abs(n-m);
        int ans=0;
        if(temp>k)ans=temp-k;
        cout<<ans<<endl;

    }

    return 0;
}
