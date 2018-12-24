#include <bits/stdc++.h>
using namespace std;

int main() {
	int num[27];
	for(int i=0;i<27;)
	{
		for(int j=0;j<5;j++)
		{
			num[i++]=j;
			if(i==27)
			break;
		}
	}
	int y;
	scanf("%d",&y);
	for(int k=0;k<y;k++)
	{
	int sum=0;
	string x;
	cin>>x;
	for(int i=0;i<x.size();i++)
	{
		sum=sum+num[x[i]-'a'];
	}
	cout<<sum<<endl;
	}
	return 0;
}