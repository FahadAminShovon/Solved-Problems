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
    int a,b;
    sc("%d%d",&a,&b);
    int ans=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        ans++;
    }
    cout<<ans<<endl;


    return 0;
}
