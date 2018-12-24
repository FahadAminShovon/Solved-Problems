#include <iostream>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int num[x];
	for(int i=0;i<x;i++)
	{
		cin>>num[i];
	}
	int a=0;
	int b=x-1;
	int sereja=0;
	int Dima=0;
	int y;
	for(int i=0;i<x;i++)
	{
		y=max(num[a],num[b]);
		if(y==num[a])
		{
			a++;
		}
		else
		{
			b--;
		}
		if(i%2!=0)
		{
			sereja+=y;
		}
		else
		{
			Dima+=y;
		}
	}
	cout<<Dima<<" "<<sereja<<endl;
	
	return 0;
}