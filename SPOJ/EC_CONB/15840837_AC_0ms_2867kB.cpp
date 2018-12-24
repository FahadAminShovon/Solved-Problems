#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

void solve(int num){
	if(num==0){
		pf("0\n");
		return;
	}
	
	string str="";
	while(num>0){
		if(num%2)str+="1";
		else str+="0";
		num/=2;
	}
	
	//cout<<str<<endl;
	int sz= str.size();
	int sum=0;
	int xx=1;
	for(int i=sz-1;i>=0;i--){
		sum+=((str[i]-'0'))*xx;
		xx*=2;
		
	}
	printf("%d\n",sum);
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		int num;
		sc("%d",&num);
		if(num%2)pf("%d\n",num);
		else solve(num);
	}
	return 0;
}