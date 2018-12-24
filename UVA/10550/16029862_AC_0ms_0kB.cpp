#include <bits/stdc++.h>
#define sc scanf
#define pf ptinf

using namespace std;

int main() {
	int a,b,c,d;
	while(sc("%d%d%d%d",&a,&b,&c,&d)==4){
		if(a==0&&b==0&&c==0&&d==0)break;
		int sum=1080;
		
		int x = a-b;
		if(x<0)x+=40;
		sum+=x*9;
		
		x=(c-b);
		if(x<0)x+=40;
		sum+=x*9;
		
		x=(c-d);
		if(x<0)x+=40;
		sum+=x*9;
		
		
		cout<<sum<<endl;
		
		
		
			
		
	}
	return 0;
}
