#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str;
	cin>>str;
	int sum=0;
	int sz=str.size();
	for(int i=0;i<sz;i++){
		sum+=str[i]-'0';
	}
	printf("%d\n",sum);
}

int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}