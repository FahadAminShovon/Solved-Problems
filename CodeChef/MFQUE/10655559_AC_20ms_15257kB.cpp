#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define pii pair<int,int>


using namespace std;
const int mx = 100000080;
typedef long long int ll;
typedef unsigned long long ull;



int main() {
	int num;
	sc("%d",&num);
	int arr[num];
	for(int i=0;i<num;i++){
		sc("%d",&arr[i]);
	}
	
	
	int q;
	sc("%d",&q);
	while(q--){
	  int a,b;
	  sc("%d%d",&a,&b);
	  
	  int temp= b-a+1;
	  
	  int arr2[temp];
	  
	  
	  for(int i=0;i<temp;i++){
	  	arr2[i]=arr[i+a-1];
	  }
	  
	  
	 // for(int i=0;i<temp;i++){
	  //	cout<<arr2[i]<<" ";
	  //}
	  
	  sort(arr2,arr2+temp);
	 
	  
	  ll sum=0;
	  
	  for(int i=1;i<temp;i++){
	  	sum+=pow((arr2[i]-arr2[i-1]),2);
	  }
	  
	  cout<<sum<<endl;
	  
	  
	}
	
	
	
	return 0;
}