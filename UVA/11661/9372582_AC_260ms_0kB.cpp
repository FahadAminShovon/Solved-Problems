#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sc4(a,b,c,d) scanf("%d,%d,%d,%d",&a,&b,&c,&d)
#define loop(i,n) for(int i=0;i<n;i++)
#define cLoppp(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define all(a) a.begin(),a.end
#define ub upper_bound
#define lb lower_bound
#define bs binary_search
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define pb push_back
#define mp make_pair

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int main() {
	int x;
	while(scanf("%d",&x)==1&&x!=0){
		string str;
		cin>>str;
		int checker=0;
		loop(i,x){
			if(str[i]=='Z'){
				checker++;
			}
		}
		if(checker){
			cout<<0<<endl;
			continue;
		}
		int a=-1;
		int b=-1;
		vector<int>v;
		loop(i,x){
			if(str[i]=='R')a=i;
			if(str[i]=='D')b=i;
			if(a!=-1&&b!=-1){
				int ans= abs(a-b);
				v.pb(ans);
			}
		}
		
		sort(v.begin(),v.end());
		cout<<v[0]<<endl;
		
	}
}