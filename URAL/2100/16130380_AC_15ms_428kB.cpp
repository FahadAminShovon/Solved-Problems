#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

int main() {
	int n;
	sc("%d",&n);
	getchar();
	string str;
	int sum=2;
	for(int i=0;i<n;i++){
		cin>>str;
		int sz=str.size();
		for(int i=0;i<sz;i++){
			if(str[i]=='+')sum++;
		}
		sum++;
	}
	if(sum==13)sum++;
	cout<<sum*100<<endl;
	return 0;
}