#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
int pile[105][105];

void clean(){
	for(int i=0;i<105;i++)
	for(int j=0;j<105;j++)
	pile[i][j]=0;
}

int main() {
	int n,k;
	cin>>n>>k;
	
	//cout<<n<<" "<<k<<endl;
	int arr[n];
	int mn=1000;
	
	for(int i=0;i<n;i++){
		sc("%d",&arr[i]);
		mn=min(mn,arr[i]);
	}
	
	int c=1;
	clean();
	
	for(int i=0;i<n;i++)
	for(int j=0;j<mn;j++)
	pile[i][j]=c;
	
	
	for(int i=0;i<n;i++){
		int temp=c;
		for(int j=mn;j<arr[i];j++){
			if(temp>k){
				pf("NO\n");
				return 0;
			}
			pile[i][j]=temp;
			temp++;
		}
	}
	
	
	pf("YES\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<arr[i];j++){
			cout<<pile[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}