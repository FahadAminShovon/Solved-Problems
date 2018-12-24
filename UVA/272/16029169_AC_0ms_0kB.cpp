#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

int main() {
	string str;
	int counter=0;
	while(getline(cin,str)){
	
	int sz=str.size();
	for(int i=0;i<sz;i++){
		if(str[i]=='"'){
			if(counter%2==1)pf("''");
			else pf("``");
			counter++;
			
			//cout<<counter<<endl;
			continue;
		}
		pf("%c",str[i]);
	}
	
	cout<<endl;
	}
}