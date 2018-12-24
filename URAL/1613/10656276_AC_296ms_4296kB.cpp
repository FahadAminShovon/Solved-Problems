#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define pii pair<int,int>


using namespace std;
const int mx = 100000080;
typedef long long int ll;
typedef unsigned long long ull;



int main() {
	map<int,vector<int> >mp;
	
	int num;
	sc("%d",&num);
	
	for(int i=1;i<=num;i++){
		int people;
		sc("%d",&people);
               //mp[i].pb(people);
		mp[people].pb(i);
	}
	
	int q;
	sc("%d",&q);
	
	while(q--){
		
		int l,r,n;
		sc("%d%d%d",&l,&r,&n);
		
		if(!mp.count(n)){
			cout<<0;
			continue;
		}
		
		int index1=upper_bound(mp[n].begin(),mp[n].end(),r)-mp[n].begin();
		int index2=lower_bound(mp[n].begin(),mp[n].end(),l)-mp[n].begin();
		
		int ans=0;
		//cout<<index1<<" "<<index2<<endl;
		
		if(index1-index2)ans=1;
		
		cout<<ans;
		
		
		
	}
	
	cout<<endl;
	
	return 0;
}