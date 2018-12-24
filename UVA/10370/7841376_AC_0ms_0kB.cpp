#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	
	for(int start=0;start<x;start++)
	{
		int a;
		scanf("%d",&a);
		int grade[a];
		double sum=0;
		for(int i=0;i<a;i++)
		{
			cin>>grade[i];
			sum=sum+grade[i];
		}
		
		double avg=(sum/(a*1.0));
		
		int counter=0;
		
		for(int check=0;check<a;check++)
		{
			if(grade[check]>avg)
			{
				counter++;
			}
		}
		
		double result=(counter/(a*1.0)*100);
		printf("%.3f",result);
		printf("%\n");
	}
	return 0;
}