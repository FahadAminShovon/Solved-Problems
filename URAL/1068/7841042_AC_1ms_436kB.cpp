#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	scanf("%d",&a);
	int sum=0;
	if(a>0){
	sum=a*(a+1)/2;
	}
	else
	{
		sum=a*(1-a)/2+1;
	}
	
	cout<<sum<<endl;
	return 0;
}