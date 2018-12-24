#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int a;
		scanf("%d",&a);
		int b= a/2;
		int c=a-b;
		printf("%d %d\n",b,c);
	}
	return 0;
}