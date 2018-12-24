#include <bits/stdc++.h>
using namespace std;

int rev(string str){
	string str1;
	for(int i=str.size()-1;i>=0;i--){
		str1+=str[i];
	}
	stringstream ssd;
	ssd<<str1;
	int num;
	ssd>>num;
	return num;
}
	


int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		string str1;
		string str2;
		cin>>str1>>str2;
		int x=rev(str1);
		int y=rev(str2);
		int ans=x+y;
		stringstream ssd;
		ssd<<ans;
		string w;
		ssd>>w;
		ans=rev(w);
		cout<<ans<<endl;
	}
	return 0;
}