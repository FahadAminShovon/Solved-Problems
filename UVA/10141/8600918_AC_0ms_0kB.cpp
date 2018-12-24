#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int x,y;
	string ajaira;
	int tc=1;
	bool blank = false;
	while(scanf("%d%d",&x,&y)==2){
 
		if(x==0&&y==0)break;
		getline(cin,ajaira);
		string str[x];
		for(int i=0;i<x;i++){
			getline(cin,str[i]);
		}
 
		string met_requirements[y];
		double price[y];
		int num[y];
		int copyNum[y];
		for(int i=0;i<y;i++){
			getline(cin,met_requirements[i]);
			scanf("%lf%d",&price[i],&num[i]);
			          copyNum[i]=num[i];
			getline(cin,ajaira);
			string baal[num[i]];
			for(int j=0;j<num[i];j++){
				getline(cin,baal[j]);
			}
 
		}
		sort(copyNum,copyNum+y);
 
 
		int maxNum=copyNum[y-1];
 
		vector<double>copyPrice;
		int minP;
		vector<int>maxN;
		for(int i=0;i<y;i++){
			if(maxNum==num[i]){
				maxN.push_back(i);
				//cout<<num[i]<<endl;
				copyPrice.push_back(price[i]);
			}
		}
 
		sort(copyPrice.begin(),copyPrice.end());
		double minPrice=copyPrice[0];
 
		for(int i=0;i<y;i++){
			if(minPrice==price[i] && num[i] == maxNum){
				minP=i;
				break;
			}
 
		}
		if (blank) printf ("\n");
        blank = true;
 
		printf("RFP #%d\n",tc++);
		if(maxN.size()==1){
			cout<<met_requirements[maxN[0]]<<endl;
		}
		else
		{
			cout<<met_requirements[minP]<<endl;
		}
 
		maxN.clear();
	}
	return 0;
}