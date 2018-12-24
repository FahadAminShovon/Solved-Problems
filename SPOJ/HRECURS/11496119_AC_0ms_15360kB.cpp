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
    //cout<<tc<<endl;
    for(int i=1;i<=tc;i++){
        int n;
        sc("%d",&n);
      //  cout<<n<<endl;
        int sum=0;
        for(int j=0;j<n;j++){
                int a;
            sc("%d",&a);
        sum+=a;
        }
        pf("Case %d: %d\n",i,sum);
    }

    return 0;
}
