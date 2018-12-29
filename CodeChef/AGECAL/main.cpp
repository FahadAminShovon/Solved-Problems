#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

void solve(){
	int m;
	sc("%d",&m);
	int arr[m];
	int sum =0;
	
	for(int i=0;i<m;i++){
		sc("%d",&arr[i]);
		sum+=arr[i];
	}
	
	int ya,ma,da,yb,mb,db;
	sc("%d%d%d%d%d%d",&ya,&ma,&da,&yb,&mb,&db);
	
	
	int date1=0;
	int date2=0;
	
	int temp1=(ya-1)/4;
	
	date1+=(ya-1)*sum+temp1;
	for(int i=0;i<ma-1;i++)date1+=arr[i];
	date1+=da;
	
	int temp2=(yb-1)/4;
	date2+=(yb-1)*sum+temp2;
	for(int i=0;i<mb-1;i++)date2+=arr[i];
	date2+=db;
	
	
	cout<<date2-date1+1<<endl;
	
}

int main() {
	int t;
	sc("%d",&t);
	
	for(int i=0;i<t;i++)solve();
	return 0;
}