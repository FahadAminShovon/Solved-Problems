#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pi acos(-1)
#define fread freopen("input.txt","r",stdin)
#define pb push_back

using namespace std;

const int mx = 10000000;
typedef long long int ll;

bool prime[mx];

void primeId(){
    memset(prime,true,sizeof(prime));
    ll n = sqrt(mx);

    for(ll i=3;i<n;i++){
        if(prime[i]){
            for(ll j=i*i;j<mx;j+=(2*i)){
                prime[j]=false;
            }
        }
    }
}

vector<ll>v;

void pusher(){
    v.pb(2);
    for(ll i=3;i<mx;i+=2){
        if(prime[i])v.pb(i);
    }
}

void solve(int num){
    int temp = sqrt(num)+1;
    int ans,cnt;
    ans = 1 ;
    for(int i=0;v[i]<temp;i++){
        cnt = 0;
        int w = v[i];
        while(num%w==0){
            num=num/w;
            cnt++;
        }

        ans = max(ans,cnt);

        temp=sqrt(num)+1;
    }

    cout<<ans<<endl;
}

int main()
{
   // fread;
    primeId();
    pusher();
    int n;
    sc("%d",&n);
    for(int i=0;i<n;i++){
        int num;
        sc("%d",&num);
        solve(num);
    }

    return 0;
}
