#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
const int mx = 100000000;
typedef long long int ll;

using namespace std;

#define maxx 100000008
 
//bitset<maxx/2> prime;
bool prime[maxx];
vector<ll>v;
 
void sieve()
{
    int x=maxx/2, y=sqrt(maxx)/2;
    for(int i=1; i<=y; i++)
    {
        if(prime[i]==0)
        {
            for(int j=(i*(i+1))*2; j<=x; j+=(2*i)+1)
                prime[j]=1;
        }
    }
    v.pb(2);
    for(int i=3; i<maxx; i+=2)
        if(prime[i/2]==0)
            v.pb(i);
}


/*bool prime[mx];

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
*/


double ln(double x){
	double store = exp(1);
	double ans = log(x)/log(store);
	return ans;
}



double pi(ll x){
	ll ans = upper_bound(v.begin(),v.end(),x)-v.begin();
	return ans;
}


int main() {
	//primeId();
	//pusher();
	
	sieve();
	ll num;
	while(sc("%lld",&num)==1&&num!=0){
	    double x = pi(num);
	    double ans = abs(x-(num/ln(num)))/x*100;
	    pf("%.1lf\n",ans);
	}

	
	return 0;
}