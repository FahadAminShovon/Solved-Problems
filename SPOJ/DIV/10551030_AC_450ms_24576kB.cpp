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


int koyta_divisor(int num){
	if(prime[num]==true)return 2;
	int sz = v.size();
	int n = sqrt(num);
	int sum =1;
	int k=0;
	for(int i=v[k];k<sz&&i<=n&&num!=1;i=v[++k]){
		int counter=0;
		int w;
		while(num%i==0&&num!=1){
			num=num/i;
			counter++;
			 
		}
		sum*=counter+1;
	//	cout<<w<<" "<<counter<<endl;
	}
	if(num!=1)sum*=2;
	return sum;
}
int counter=0;

void solve(int sum,int num){
	int sz = v.size();
	int temp=sqrt(sum);
	int x=0;
	for(int i= 0;i<sz&&v[i]<=temp;i++){
		if(sum%v[i]==0)  x= sum/v[i];
		if(x!=v[i]&&prime[x]){
			counter++;
			if(counter%9==0)cout<<num<<endl;
			break;
		}
	}
	
}

int main() {
	primeId();
	pusher();
	int sz = v.size();
	cout<<"50\n99\n";
	for(int i=100;i<=1000000;i++){
		int nod = koyta_divisor(i);
		//cout<<nod<<endl;
		solve(nod,i);
	            
		
		}
	
	return 0;
}