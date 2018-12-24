#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int caseNo=1;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
	    int a;
	    scanf("%d",&a);
	    int num[a];
	    for(int j=0;j<a;j++)
	    {
	    	cin>>num[j];
	    }
	    sort(num,num+a);
	    printf("Case %d: %d\n",caseNo++,num[a/2]);
	}
	return 0;
}