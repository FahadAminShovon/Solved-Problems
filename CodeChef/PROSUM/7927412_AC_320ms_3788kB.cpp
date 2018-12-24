#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int a;
		scanf("%d",&a);
		long long int num[a];
		long long int pair=0;
		long long int equal2=0;
		for(int j=0;j<a;j++)
		{
			cin>>num[j];
			if(num[j]>=2)
			{
				pair++;
				if(num[j]==2)
				{
					equal2++;
				}
			}
		}
		
		long long int ans=((pair*(pair-1)/2)-(equal2*(equal2-1)/2));
		cout<<ans<<endl;
			
		}
	return 0;
}