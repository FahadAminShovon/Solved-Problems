#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		int a[3];
		cin>>a[0];
		cin>>a[1];
		cin>>a[2];
		sort(a,a+2);
		if(a[0]+a[1]>a[2])
		{
			cout<<"OK"<<endl;
		}
		else
		{
			cout<<"Wrong!!"<<endl;
		}
	}
	return 0;
}