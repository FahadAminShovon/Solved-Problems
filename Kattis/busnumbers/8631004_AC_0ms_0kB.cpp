#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
		sort(arr,arr+x);
	     
	    int counter=0; 	
		cout<<arr[0];
		if(arr[0]+1==arr[1]){
			counter++;
		}
		
		for(int i=1;i<x;i++){
			//cout<<counter<<endl;
			if(arr[i]+1==arr[i+1]&&counter==0){
				cout<<" "<<arr[i];
				counter++;
			}
			else if(counter!=0&&arr[i]+1==arr[i+1])counter++;
			else if(counter>1){
				//cout<<counter<<endl;
				printf("-%d",arr[i]);
				counter=0;
			}
			else
			{
				cout<<" "<<arr[i];
				counter=0;
			}
		}
		cout<<"\n";
	return 0;
}