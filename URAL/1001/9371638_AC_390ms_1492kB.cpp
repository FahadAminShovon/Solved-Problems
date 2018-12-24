#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b)
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
	vector<double>db;
	double x;
	while(sc("%lf",&x)==1){
		db.pb(x);
	}
	
	for(int i=db.size()-1;i>=0;i--){
		double ans = sqrtl(db[i]);
		pf("%.4lf\n",ans);
	}
	
}