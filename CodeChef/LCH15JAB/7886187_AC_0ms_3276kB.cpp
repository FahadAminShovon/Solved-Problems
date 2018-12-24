#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int k=0;k<x;k++)
	{
	int val[26];
	memset(val,0,sizeof(val));
	string a;
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
		val[a[i]-'a']++;
	}
	sort(val,val+26);
	int sum=0;
	for(int i=0;i<25;i++)
	{
		sum=sum+val[i];
	}
	if(sum==val[25])
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	}
	return 0;
}