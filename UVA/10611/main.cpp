#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define ub upper_bound
#define lb lower_bound
#define fread freopen("input.txt","r",stdin)
#define pb push_back

using namespace std;

vector<int>v;
int sz=0;
void solve(){
    int num;
    sc("%d",&num);
    //cout<<num<<" ";
    int index1=lb(v.begin(),v.end(),num)-v.begin();
    //cout<<index1<<" ";

    if(index1==0)pf("X ");
    else pf("%d ",v[index1-1]);


    int index2=ub(v.begin(),v.end(),num)-v.begin();
    //cout<<index2<<endl;
    if(index2==sz)pf("X\n");
    else pf("%d\n",v[index2]);
}


int main()
{
    fread;
    int n;
    sc("%d",&n);
    sz=n;
    int x;
    //cout<<n<<endl;
    for(int i=0;i<n;i++){
        sc("%d",&x);
        v.pb(x);
      //  cout<<x<<" ";
    }
    //cout<<endl;
    int q;
    sc("%d",&q);
    //cout<<q<<endl;
    for(int i=0;i<q;i++){
        solve();
    }
    //cout<<endl;




    return 0;
}
