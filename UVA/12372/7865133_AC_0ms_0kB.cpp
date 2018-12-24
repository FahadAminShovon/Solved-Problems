#include <iostream>
using namespace std;

int main() {
	int x;
	int caseNo=1;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a>20||b>20||c>20)
		{
			printf("Case %d: bad\n",caseNo++);
		}
		else
		{
			printf("Case %d: good\n",caseNo++);	
		}
	}
	return 0;
}