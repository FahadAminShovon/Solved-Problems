#include <bits/stdc++.h>
using namespace std;

int main() {
	string x;
	int mod4,mod15,mod55,mod100,mod400;
	int space=0;
	while(cin>>x){
		if(space!=0)
		{
			cout<<endl;
		}
		space=0;
		mod4=0;
		mod15=0;
		mod55=0;
		for(int i=0;i<x.size();i++)
		{
			mod4=(mod4*10+(x[i]-'0'))%4;
			mod15=(mod15*10+(x[i]-'0'))%15;
			mod55=(mod55*10+(x[i]-'0'))%55;
			mod100=(mod100*10+(x[i]-'0'))%100;
			mod400=(mod400*10+(x[i]-'0'))%400;
		}
		int leap=0;
		int breaker=0;
		if((mod4==0&&mod100!=0)||(mod4==0&&mod400==0))
		{
			printf("This is leap year.\n");
			leap++;
		}
		if(mod15==0)
		{
			printf("This is huluculu festival year.\n");
			breaker++;
		}
		if(leap==1&&mod55==0)
		{
			printf("This is bulukulu festival year.\n");	
		}
		if(breaker==0&&leap==0)
		{
			printf("This is an ordinary year.\n");
		}
		space++;
	}
	return 0;
}