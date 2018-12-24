#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int num;
		scanf("%d",&num);
		int a[num],b[num],c[num],d[num];
		for(int j=0;j<num;j++){
			scanf("%d %d %d %d",&a[j],&b[j],&c[j],&d[j]);
		}
		int w;
		vector<int>store1;
		vector<int>store2;
		for(int j=0;j<num;j++){
			for(int k=0;k<num;k++){
				w=a[j]+b[k];
				store1.push_back(w);
			}
		}
		
		for(int j=0;j<num;j++){
			for(int k=0;k<num;k++){
				w=(c[j]+d[k])*-1;
				store2.push_back(w);
			}
		}
		sort(store1.begin(),store1.end());
		long long int counter=0;
		int index1,index2;
		for(int j=0;j<num*num;j++){
				index1=lower_bound(store1.begin(),store1.end(),store2[j])-store1.begin();
				index2=upper_bound(store1.begin(),store1.end(),store2[j])-store1.begin();
				counter+=index2-index1;
			}
			
			cout<<counter<<endl;
			store1.clear();
			store2.clear();
			if(i!=t)cout<<"\n";
	}
	return 0;
}