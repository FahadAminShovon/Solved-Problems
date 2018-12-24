#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define fread freopen("input.txt","r",stdin)
using namespace std;

const int mx = 100005;
vector<int>prime;
bool p[mx];

void sieve(){

    memset(p,true,sizeof(p));

    int n = sqrt(mx);
    for(int i=3;i<=n;i+=2){
        if(p[i]){
            for(int j=i*i;j<=mx;j+=i){
                    p[j]=false;
            }
        }
    }
    p[2]=true;
    p[0]=false;
    p[1]=false;

    prime.pb(2);
    for(int i=4;i<=mx;i+=2){
        p[i]=false;
    }

    for(int i=3;i<=mx;i+=2){
        if(p[i]==true){
            prime.pb(i);
        }
    }
}

int main()
{


    sieve();
    //fread;
    /*for(int i=0;i<10;i++){
        //cout<<prime[i]<<endl;
    }

    int index1= lower_bound(prime.begin(),prime.end(),8)-prime.begin();
    cout<<index1<<endl;
    cout<<prime[index1]<<endl;*/

    int m,n;
    sc("%d%d",&m,&n);

    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sc("%d",&arr[i][j]);
        }
    }

    int ans = INT_MAX;
    int sum=0;
    int flag = 0;
    for(int i=0;i<m;i++){
        sum=0;
        flag=0;
        for(int j=0;j<n;j++){
            int x = arr[i][j];
            //cout<<x<<" "<<p[x]<<" ";
            if(p[x]==false){
               int index1= lower_bound(prime.begin(),prime.end(),x)-prime.begin();
               int num = prime[index1];
               sum+=(num-x);
            }
        }
        //cout<<"sum="<<sum<<endl;
        //cout<<endl;

        ans=min(sum,ans);

    }


    for(int i=0;i<n;i++){
        sum=0;
        flag=0;
        for(int j=0;j<m;j++){
            int x = arr[j][i];
            if(p[x]==false){
               int index1= lower_bound(prime.begin(),prime.end(),x)-prime.begin();
               int num = prime[index1];
               sum+=(num-x);
               flag++;
            }
        }

        ans=min(sum,ans);

    }

    //for()

    cout<<ans<<endl;



    return 0;
}
