#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	string ajaira;
	getline(cin,ajaira);
	for(int i=0;i<x;i++)
	{
		int sum1=0;
		int sum2=0;
		string str;
		getline(cin,str);
		stringstream ssd;
		ssd<<str;
		string s;
		while(ssd>>s){
			int num1=(s[0]-'0')*2;
			int num2=(s[2]-'0')*2;
			sum1+=(num1%10)+((num1/10)%10)+(num2%10)+((num2/10)%10);
			//cout<<sum1<<endl;
			sum2+=(s[1]-'0')+(s[3]-'0');
		}
		
		int ans=sum1+sum2;
		//cout<<ans<<endl;
		if(ans%10==0)printf("Valid\n");
			else printf("Invalid\n");
		
	}
	return 0;
}