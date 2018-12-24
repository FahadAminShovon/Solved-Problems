#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef long long int ll;

//method help taken from stack overflow
/*https://stackoverflow.com/questions/11891984/count-the-number-of-occurrences-of-0s-in-integers-from-1-to-n*/

ll koytazero(ll num){
	if(num<0)return num;
	ll result = 0;
	ll i=1;
	
	while(true){
		ll b = num/i;
		ll c = num%i;
		ll a = b/10;
		b = b%10;
		
		if(a==0)return result;
		
		if(b==0)  result += (a - 1) * i + c + 1;
		else result += a * i;
		
		i=i*10;
	}
}

int main() {
	
	ll a,b;
	while(sc("%lld%lld",&a,&b)==2){
		if(a==-1&&b==-1)break;
		//cout<<koytazero(1234)<<endl;
		cout<<koytazero(b)-koytazero(a-1)<<endl;
	}
	
	return 0;
}