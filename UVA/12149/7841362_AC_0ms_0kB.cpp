#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	while(scanf("%d",&x)==1)
	{
		if(x==0)
		{
			break;
		}
		int sum=0;
		for(int i=1;i<=x;i++)
		{
			sum=sum+(i*i);
		}
		cout<<sum<<endl;
	}
	return 0;
}