#include <bits/stdc++.h>
using namespace std;

int main() {
	
	char arr[20];
	int caseNo=1;
	while(scanf("%s",arr)==1)
	{
		if(arr[0]=='*')
		{
			break;
		}
		else if(!strcmp(arr,"Hajj"))
		{
			printf("Case %d: Hajj-e-Akbar\n",caseNo);
		}
		else if(!strcmp(arr,"Umrah"))
		{
			printf("Case %d: Hajj-e-Asghar\n",caseNo);
		}
		caseNo++;
		
	}
	
		return 0;
}