#include <bits/stdc++.h>

#define rep(i,n)         for(int i=0;i<n;i++)
#define sc               scanf
#define pf               printf
#define all(a)           a.begin(),a.end()
#define pi               2*acos(0.0)
#define VI               vector<int>
#define VII              vector<long long int>
#define PB(a)            push_back(a)
#define QI               queue<int>
#define QII              queue<long long int>
#define P(a)             push(a) 
#define MP               make_pair
#define ms(a,b)          memset(a,b,sizeof(a))
#define ff               first
#define ss               second
#define UB               upper_bound
#define LB               lower_bound
#define BS               binary_search
#define gcd(a,b)         _gcd(a,b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))

typedef unsigned long long int ull;
typedef long long int ll;
typedef double db;


const int MX=1e7;
const int eps=1e-7;

using namespace std;

int main() {
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		printf("Case %d:\n",i);
		int n,p;
		scanf("%d %d",&n,&p);
		VI v;
		rep(i,n){
			int x;
			sc("%d",&x);
			v.PB(x);
		}
		
		int start,end;
		for(int j=0;j<p;j++){
			sc("%d %d",&start,&end);
			int up = UB(all(v),end)-v.begin();
			int low= LB(v.begin(),v.end(),start)-v.begin();
			pf("%d\n",up-low);
		}
		
	}
	return 0;
}