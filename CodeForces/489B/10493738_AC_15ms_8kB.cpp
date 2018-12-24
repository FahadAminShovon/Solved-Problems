#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;

int main() {
	int m;
	sc("%d",&m);
	int boy[m];
	for(int i=0;i<m;i++){
		sc("%d",&boy[i]);
	}
	sort(boy,boy+m);
	int n;
	sc("%d",&n);
	int girl[n];
	for(int i=0;i<n;i++)sc("%d",&girl[i]);
	sort(girl,girl+n);
	
	int lo=0,hi=0;
	int counter=0;
	while(hi<m&&lo<n){
	if(abs(boy[hi]-girl[lo])<=1){
		counter++;
		hi++;
		lo++;
	}
	else if(boy[hi]>girl[lo])lo++;
	else hi++;
	}
	cout<<counter<<endl;
	return 0;
}