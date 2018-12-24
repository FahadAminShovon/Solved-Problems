#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		int row,column,max,min;
		scanf("%d%d%d%d",&row,&column,&max,&min);
		int num[30];
		memset(num,0,sizeof(num));
		string str="";
		string w;
		for(int j=0;j<row;j++)
		{
			cin>>w;
			for(int k=0;k<w.size();k++)
			{
				num[w[k]-'A']++;
			}
		}
		vector<int>v;
		for(int j=0;j<30;j++)
		{
			if(num[j]>0)
			{
				int s=num[j];
				v.push_back(s);
			}
		}
		
		int m = 0,counter = 1;

        for(int i = 0;i < 26;++i){
            if(num[i] > m){
                m = num[i];
                counter = 1;
            }else if(num[i] == m){
                counter++;
            }
        }

		int a=counter*m;
		int b=(row*column)-a;
		int sum=(a*max)+(b*min);
		printf("Case %d: %d\n",i,sum);
	}
	return 0;
}