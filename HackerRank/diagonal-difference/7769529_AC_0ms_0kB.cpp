#include <bits/stdc++.h>
using namespace std;

int main() {

	int x;
	scanf("%d",&x);
	int a1=0;
	int b1=x-1;
	int a=0;
	int b=0;
	
	for(int counter=0;counter<x;counter++)
	{
		int arr[x];
		for(int counterOne=0;counterOne<x;counterOne++)
		{
			cin>>arr[counterOne];
		}
		a=a+arr[a1];
		b=b+arr[b1];
		a1++;
		b1--;
		
	}
	
	cout<<abs(a-b)<<endl;
	return 0;
}