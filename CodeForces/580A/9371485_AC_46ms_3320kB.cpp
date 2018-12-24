#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	if(x==1){
		cout<<1<<endl;
	}
	else{
	vector<int>chk;
	for(int i=0;i<x-1;){
		int counter=1;
		while(arr[i+1]>=arr[i]){
			counter++;
			i++;
			if(i==x-1)break;
		}
		i++;
		chk.push_back(counter);
	}
	if(chk.size()==1){
		cout<<chk[0]<<endl;
	}
	else{
	sort(chk.begin(),chk.end());
	cout<<chk[chk.size()-1]<<endl;
	}
	}
	return 0;
}