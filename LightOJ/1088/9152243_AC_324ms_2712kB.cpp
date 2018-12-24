#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		printf("Case %d:\n",i);
		int n,p;
		scanf("%d %d",&n,&p);
		vector<int>v;
		for(int j=0;j<n;j++){
			int x;
			scanf("%d",&x);
			v.push_back(x);
		}
		
		int start,end;
		for(int j=0;j<p;j++){
			scanf("%d %d",&start,&end);
			int up = upper_bound(v.begin(),v.end(),end)-v.begin();
			int low= lower_bound(v.begin(),v.end(),start)-v.begin();
			printf("%d\n",up-low);
		}
		
	}
	return 0;
}