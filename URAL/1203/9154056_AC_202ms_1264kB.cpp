#include <bits/stdc++.h>
#define Cloop(i,n)     for(int i=1;i<=n;i++)
#define loop(i,n)        for(int i=0;i<n;i++)
#define sc                    scanf
#define pf                    printf
#define all(a)               a.begin(),a.end()
#define pi                    2*acos(0.0)
#define VI                    vector<int>
#define VII                   vector<long long int>
#define PB(a)              push_back(a)
#define QI                   queue<int>
#define QII                  queue<long long int>
#define P(a)                push(a) 
#define MP(a,b)                 make_pair(a,b)
#define ms(a,b)         memset(a,b,sizeof(a))
#define ff                    first
#define ss                   second
#define UB                 upper_bound
#define LB                  lower_bound
#define BS                  binary_search
#define gcd(a,b)        _gcd(a,b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
typedef unsigned long long int  ull;
typedef long long int ll;
typedef double db;
const int MX=1e7;
const int eps=1e-7;

using namespace std;

int main() {
	int a;
	sc("%d",&a);
	pair<int,int>arr[a];
	int s,e;
	loop(i,a){
		sc("%d%d",&s,&e);
		arr[i]=MP(e,s);
	}
	sort(arr,arr+a);
	int counter=1;
	int c=0;
	for(int j=1;j<a;j++){
		if(arr[j].ss>arr[c].ff){
			counter++;
			c=j;
		}
	}
	pf("%d\n",counter);
	return 0;
}