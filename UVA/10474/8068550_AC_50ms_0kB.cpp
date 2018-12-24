#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z,caseNo=1;
	while(scanf("%d %d",&x,&y)==2&&(x&&y))
	{
		vector<int>a;
		vector<int>b;
		for(int i=0;i<x;i++)
		{
			scanf("%d",&z);
			a.push_back(z);
		}
		
		sort(a.begin(),a.end());
			printf("CASE# %d:\n",caseNo++);
		for(int i=0;i<y;i++)
		{
			scanf("%d",&z);
			int index=lower_bound(a.begin(),a.end(),z)-a.begin();
			if(a[index]==z)
			{
				printf("%d found at %d\n",z,index+1);
			}
			else
			{
				printf("%d not found\n",z);
			}
		}
		
	}
	return 0;
}