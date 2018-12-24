#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define fread freopen("input.txt","r",stdin)
#define pb push_back
using namespace std;


void solve(){
    int item,bxz;
    sc("%d%d",&item,&bxz);
    int xx=bxz/2;

    int arr[item];

    for(int i=0;i<item;i++)sc("%d",&arr[i]);

    sort(arr,arr+item);
    
    int lo=0;
    int hi=item-1;
    int cnt=0;
    
    while(hi>=lo){
    	int xx = arr[lo];
    	int yy = arr[hi];
    	
    	if(xx+yy<=bxz&&lo!=hi){
    		hi--;
    		lo++;
    	}
    	else hi--;
    	
    	cnt++;
    }
    
    cout<<cnt<<endl;

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