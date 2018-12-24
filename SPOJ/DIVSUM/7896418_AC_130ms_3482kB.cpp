#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d", &x);
	for(int j=0;j<x;j++)
	{
		int a;
		scanf("%d", &a);
		int counter=0;
		for(int i=1; i<=sqrt(a); i++) 
		{
			if((a%i==0)&&(i!=sqrt(a)))
			{
				counter=counter+i+(a/i);
			}
			else if((a%i==0)&&(i==sqrt(a)))
			{
				counter=counter+i;
			}
		}
		printf("%d\n", counter-a);
	}
	return 0;
}