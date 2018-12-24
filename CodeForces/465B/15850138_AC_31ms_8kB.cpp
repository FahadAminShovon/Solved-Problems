#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define lb lower_bound
using namespace std;

int main() {
	int n;
	sc("%d",&n);
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){
		sc("%d",&arr[i]);
		sum+=arr[i];
	}
	int counter=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			while(arr[i]==1&&i<n){
				arr[i]==0;
				i++;
				counter++;
				sum--;
			}
			if(i!=n&&sum!=0)counter++;
		}
	}
	
	cout<<counter<<endl;
	return 0;
}