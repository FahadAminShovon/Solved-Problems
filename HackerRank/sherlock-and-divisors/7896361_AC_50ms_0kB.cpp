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
			if(a%i==0)
			{
			 if(i%2==0)
			 {
				counter++;
			 }
			if(i!=sqrt(a) && (a/i)%2==0)
			 {
			 	counter++;
			 }
			}
		}
		printf("%d\n", counter++);
	}
	return 0;
}