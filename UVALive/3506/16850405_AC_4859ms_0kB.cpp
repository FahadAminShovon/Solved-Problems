#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define fread freopen("input.txt","r",stdin)
#define pb push_back
using namespace std;


void solve(){
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

}

int main()
{
    //fread;
    int n;
    sc("%d",&n);
    for(int i=0;i<n;i++){
        solve();
        if(i!=n-1)cout<<"\n";
    }
    return 0;
}