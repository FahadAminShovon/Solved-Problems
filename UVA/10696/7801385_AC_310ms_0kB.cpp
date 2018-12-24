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
		if(x<=100)
		{
			cout<<"f91("<<x<<")"<<" = 91"<<endl;
		}
		else
		{
			cout<<"f91("<<x<<")"<<" = "<<x-10<<endl;
		}
	}
	return 0;
}