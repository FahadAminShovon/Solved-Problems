#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;

int main() {
	int n;
	sc("%d",&n);
	getchar();
	
	string str[n];
	for(int i=0;i<n;i++)cin>>str[i];
	
	//for(int i=0;i<n;i++)cout<<str[i]<<endl;
	
	
	int check = true;
	
	char temp = str[0][0];
	
	for(int i=1;i<n;i++){
		if(str[i][i]!=temp){
			pf("NO\n");
			return 0;
		}
	}
	
	//temp=str[0][n-1];
	
	for(int i=0;i<n;i++){
		if(str[i][n-1-i]!=temp){
			pf("NO\n");
			return 0;
		}
	}
	
	//set<char>a,b;
	map<char,int>mp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i==j||j+i+1==n))continue;
			else mp[str[i][j]]++;
		}
	}
	
	//cout<<mp.begin()->first<<endl;
	
	//cout<<mp.size()<<endl;
	if(mp.size()==1&&mp.begin()->first!=temp)pf("YES\n");
	else pf("NO\n");
	
	return 0;
}