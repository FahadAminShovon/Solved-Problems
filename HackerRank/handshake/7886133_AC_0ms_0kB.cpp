#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int y;
		scanf("%d",&y);
		int ans =(y*(y-1))/2;
		cout<<ans<<endl;
	}
	return 0;
}