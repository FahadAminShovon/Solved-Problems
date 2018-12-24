#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back

const int mx = 10000000;
typedef long long int ll;
using namespace std;


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
	
	for(ll i=4;i<mx;i+=2){
		prime[i]=false;
	}
	prime[0]=false;
	prime[1]=false;
}

void solve(int num){
	int a,b;
	if(num%2==0){
	num = num-4;
	a=2;
	b=2;
	}
	else
	{
	num = num -5;
	a=2;
	b=3;
	}
	//cout<<num<<endl;
	int temp = num/2;
	int sz = v.size();
	//cout<<temp<<endl;
	for(int i=0;v[i]<=temp&&i<sz;i++){
		int n = num-v[i];
		//cout<<n<<endl;
		if(prime[n]){
			pf("%d %d %d %d\n",a,b,v[i],n);
			//cout<<v[i]+n+4<<endl;
			return;
		}	}
	
	pf("Impossible.\n");
	
}


int main() {
	primeId();
	pusher();
	int num;
	while(sc("%d",&num)==1){
		solve(num);
	}
	return 0;
}