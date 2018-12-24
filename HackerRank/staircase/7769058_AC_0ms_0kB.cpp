#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int count=1;count<=x;count++)
	{
		for(int space=count;space<x;space++)
		{
			cout<<" ";
		}
		for(int hash=0;hash<count;hash++)
		{
			cout<<"#";
		}
		printf("\n");
	}
	return 0;
}