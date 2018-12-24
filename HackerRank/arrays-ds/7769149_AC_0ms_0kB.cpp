#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int a[x];
	for(int count=0;count<x;count++)
	{
		cin>>a[count];
	}
	for(int count=x-1;count>=0;count--)
	{
		cout<<a[count]<<" ";
	}
	printf("\n");
	return 0;
}