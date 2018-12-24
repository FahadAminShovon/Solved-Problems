#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	int num;
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		int m,n;
		scanf("%d%d",&m,&n);
		ll pile=0;
		int check=0;
		for(int j=0;j<m;j++){
			int sum=0;
			for(int k=0;k<n;k++){
				scanf("%lld",&pile);
				sum+=pile;
			}
			check^=sum;
		}
		if(check==0) printf("Case %d: Bob\n",i);
		else printf("Case %d: Alice\n",i);
	}
	return 0;
}