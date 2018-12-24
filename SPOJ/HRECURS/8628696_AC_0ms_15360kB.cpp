#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int y,sum=0;
		scanf("%d",&y);
		int w=0;
		for(int j=0;j<y;j++){
			scanf("%d",&w);
			sum+=w;
		}
		printf("Case %d: %d\n",i,sum);
	}
	return 0;
}