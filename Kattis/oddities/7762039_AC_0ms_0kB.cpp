#include <bits/stdc++.h>
using namespace std;

int main() {
	int times;
	scanf("%d",&times);
	for(int count =0;count<times;count++)
	{
		int a;
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("%d is even\n",a);
		}
		else
		{
			printf("%d is odd\n",a);
		}
	}
	return 0;
}