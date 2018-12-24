#include <iostream>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int p=0;
	int w=0;
	int counter=0;
	string str;
	for(int i=0;i<x;i++){
		cin>>str;
		if(str[0]=='A'||str[0]=='P'||str[0]=='O'||str[0]=='R')w=0;
		else if(str[0]=='B'||str[0]=='M'||str[0]=='S')w=1;
		else w=2;
		counter+=abs(w-p);
		p=w;
	}
	cout<<counter<<endl;
	return 0;
}