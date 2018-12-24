#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	int num;
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		int m;
		scanf("%d",&m);
		ll pile;
		int check=0,one=0,counter=0;
		//cout<<(check^1)<<endl;
		for(int j=0;j<m;j++){
				scanf("%lld",&pile);
				if (pile>1) counter++;
				else one++;
				check^=pile;
		}
		
		//cout<<check<<endl;
		if(counter==0){
		if(one%2==1) printf("Case %d: Bob\n",i);
		else printf("Case %d: Alice\n",i);
		}
		else if(check==0) printf("Case %d: Bob\n",i);
		else printf("Case %d: Alice\n",i);
	}
	return 0;
}