#include <bits/stdc++.h>
using namespace std;



int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		string str;
		cin>>str;
		long long int ans;
		long long int counter=0;
		while(true){
			counter++;
		string str1="";
		for(int j=str.size()-1;j>=0;j--){
			str1+=str[j];
		}
		stringstream ssd;
		ssd<<str;
		long long int num1;
		ssd>>num1;
		stringstream ssm;
		ssm<<str1;
		long long int num2;
		ssm>>num2;
		
		long long int sum=num1+num2;
		ans=sum;
		stringstream ssr;
		ssr<<sum;
		string s;
		ssr>>s;
		string sw="";
		for(int j=s.size()-1;j>=0;j--){
			sw+=s[j];
		}
		if(s==sw||sum>4294967295)break;
		else str=s;
		}
	  	cout<<counter<<" "<<ans<<endl;	
	}
	return 0;
}