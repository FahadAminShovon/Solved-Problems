#include <bits/stdc++.h>
using namespace std;

bool prime[1000010];

void cubefree(){
	memset(prime,true,sizeof(prime));
	for(int i=2;i<=100;i++){
		if(prime[i]==true){
			int cube=i*i*i;
			for(int j=cube;j<=1000010;j+=cube){
				prime[j]=false;
			}
		}
	}
}
	vector<int>store;
	void cube_pusher(){
		store.push_back(0);
		store.push_back(1);
		for(int i=2;i<=1000010;i++){
			if(prime[i]){
				store.push_back(i);
			}
			}
		}

int main() {
	cubefree();
	cube_pusher();
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int num;
		scanf("%d",&num);
		if(prime[num]){
			int index=index=lower_bound(store.begin(),store.end(),num)-store.begin();
			printf("Case %d: %d\n",i,index);
		}
		else
		{
			printf("Case %d: Not Cube Free\n",i);
		}
	}
	return 0;
}