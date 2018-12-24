#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		int sum=0;
		int w=(a+1)*b;
		int z;
		for(int i=0;i<a;i++){
			scanf("%d",&z);
			sum+=z;
		}
		int ans=w-sum;
		printf("Case %d: %d\n",i,ans);
	}
	return 0;
}