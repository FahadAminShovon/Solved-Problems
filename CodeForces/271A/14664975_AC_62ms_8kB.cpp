#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

bool flag = true;

void summer(int n){
	stringstream ss;
	ss<<n;
	string str;
	ss>>str;
	int x=0;
	for(int i=0;i<3;i++){
		for(int j=i+1;j<4;j++){
			if(str[i]==str[j])x++;
		}
	}
	
	if(x==0)flag = false;
	
}

int main() {
	int n;
	sc("%d",&n);
	
	while(flag){
		n++;
		summer(n);
	}
	
	cout<<n<<endl;
	return 0;
}