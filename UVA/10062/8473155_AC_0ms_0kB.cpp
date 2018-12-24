#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	int ln=0;
	while(getline(cin,str)){
		if(ln!=0)
		{
			printf("\n");
		}
		int x[130];
		memset(x,0,sizeof(x));
		
		for(int i=0;i<str.size();i++)
		{
			if((int)str[i]>=32&&(int)str[i]<128)
			{
				x[(int)str[i]]++;
			}
		}
		
		int l=str.size();
		
		for(int i=1;l>0;i++)
		{
			for(int j=129;j>=0;j--)
			{
				if(x[j]==i){
					printf("%d %d\n",j,i);
					l=l-i;
				}
			}
		}
		ln=1;
	}
	return 0;
}