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

    vector<int>v;
    int cnt = 0;
    for(int i=0;i<item;i++){
        if(arr[i]>xx){
            cnt++;
            if(bxz-arr[i])
            v.pb(bxz-arr[i]);
        }
    }

    vector<int>vi;
    int ans = 0;
    for(int i=0;i<item-cnt;i++){
        vi.pb(arr[i]);
    }
    int xxx=0;
    for(int i=0;i<v.size();i++){
        int idx=upper_bound(vi.begin(),vi.end(),v[i])-vi.begin();
        if(idx){
            vi.erase(vi.begin()+idx-1);
            xxx++;
        }
    }

    int temp = item-xxx-cnt;
    ans=cnt+(temp/2)+(temp%2);

    cout<<ans<<endl;

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
