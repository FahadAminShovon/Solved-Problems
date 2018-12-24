#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		int num;
		sc("%d",&num);
		//cout<<num<<endl;
		num*=63;
		num+=7492;
		num*=5;
		num-=498;
		num=abs(num);
		num=num/10;
		num=num%10;
		cout<<num<<endl;
	}
	return 0;
}