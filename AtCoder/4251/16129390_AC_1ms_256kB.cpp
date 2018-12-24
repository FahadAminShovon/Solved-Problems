#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

int main() {
	int arr[3];
	for(int i=0;i<3;i++){
		sc("%d",&arr[i]);
	}
	sort(arr,arr+3);
	int ans=(arr[2]*10)+arr[0]+arr[1];
	pf("%d\n",ans);
	return 0;
}