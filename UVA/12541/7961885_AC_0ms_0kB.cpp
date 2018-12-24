#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int sum[x];
	int store[x];
	string name[x];
	for(int i=0;i<x;i++)
	{
		string str;
		cin>>name[i];
		int day,month,year;
		scanf("%d%d%d",&day,&month,&year);
		sum[i]=day+(month*30)+(year*365);
		store[i]=sum[i];
	}
   sort(store,store+x);
   int min=store[0];
   int youngest;
   int max =store[x-1];
   int eldest;
   for(int i=0;i<x;i++)
   {
   	if(sum[i]==min)
   	{
   		youngest=i;
   		break;
   	}
   }
      for(int i=0;i<x;i++)
   {
   	if(sum[i]==max)
   	{
   		eldest=i;
   		break;
   	}
   }
   cout<<name[eldest]<<endl;
   cout<<name[youngest]<<endl;
	
	return 0;
}