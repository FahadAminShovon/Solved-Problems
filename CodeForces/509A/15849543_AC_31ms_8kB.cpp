#include <bits/stdc++.h>
using namespace std;

int arr[10][10];

void fillup(){
	for(int i=0;i<10;i++){
		arr[0][i]=1;
		arr[i][0]=1;
	}
	
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			arr[i][j]=arr[i-1][j]+arr[i][j-1];
		}
	}
	
}

int main() {
	fillup();
	int n;
	cin>>n;
	n--;
	cout<<arr[n][n]<<endl;
	return 0;
}