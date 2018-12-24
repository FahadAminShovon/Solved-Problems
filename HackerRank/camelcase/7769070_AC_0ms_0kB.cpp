#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin>>a;
	int x= a.size();
	int counter=1;
	for(int check=0;check<x;check++)
	{
		if(a[check]>='A'&&a[check]<='Z')
		{
			counter++;
		}
	}
	printf("%d\n",counter);
	return 0;
}