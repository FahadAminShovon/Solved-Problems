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
	
	
	/*int check = true;
	
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
	*/
	set<char>a,b;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j||j+i+1==n){
				a.insert(str[i][j]);
			}
			else b.insert(str[i][j]);
		}
	}
	
	//cout<<a.size()<<" "<<b.size()<<endl;
	if(a.size()==1&&b.size()==1&&(*a.begin()!=*b.begin()))pf("YES\n");
	else pf("NO\n");
	
	return 0;
}