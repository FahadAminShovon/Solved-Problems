#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	while(scanf("%d%d",&x,&y)&&(x&&y))
	{
		vector<int>num1;
		//int num2[y];
		int b;
		for(int i=0;i<x;i++)
		{
			scanf("%d",&b);
			num1.push_back(b);
		}
				int counter=0;
		int a;
		for(int i=0;i<y;i++)
		{
			scanf("%d",&a);
			if(binary_search(num1.begin(),num1.end(),a)){
				counter++;
			}
		}
		cout<<counter<<endl;
		}
	return 0;
}