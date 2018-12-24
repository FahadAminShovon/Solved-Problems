#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int num;
	vector<long long int>x;
	while(scanf("%lld",&num)==1)
	{
		x.push_back(num);
	
	    sort(x.begin(),x.end());
	    
		int y=x.size();
		//cout<<y<<endl;
		
		if(y%2!=0)
		{
			cout<<x[y/2]<<endl;
		}
		else
		{
		 cout<<(x[y/2-1]+x[y/2])/2<<endl;	
		}
	}
	return 0;
}