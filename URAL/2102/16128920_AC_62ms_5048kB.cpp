#include <bits/stdc++.h>
#define le 10000007
#define ll long long int
#define sc scanf
#define pf printf
#define pb push_back

using namespace std;

int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}

bool ans(ll num){
	int sz=v.size();
	int sum=0;
	
	for(int i=0;i<sz&&v[i]*v[i]<=num;i++){
			while(num%v[i]==0){
				num/=v[i];
				sum++;
			}
	}
	
	if(num!=1)sum++;
	
	return (sum==20);
}

int main() {
	se();
	ll x;
	sc("%lld",&x);
	
	if(ans(x))pf("Yes\n");
	else pf("No\n");
	
	
	return 0;
}