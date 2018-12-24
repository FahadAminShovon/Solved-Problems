#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define fread freopen("input.txt","r",stdin)
using namespace std;

typedef long long int ll;

int main()
{
    //fread;
    ll n,x;
    sc("%lld",&n);
    if(n==1){
        pf("100\n");
        return 0;
    }
    ll arr[n][n];
    ll r,c;
    ll sum1=0,sum2=0,sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sc("%lld",&arr[i][j]);
            if(arr[i][j]==0){
                r=i;
                c=j;
            }
        }
    }

    ll temp=0;
    if(r==0)temp=1;

    for(int i=0;i<n;i++){
        sum1+=arr[temp][i];
        sum2+=arr[r][i];
    }
    
    if(sum1-sum2<=0){
        pf("-1\n");
        return 0;
    }
    arr[r][c]=sum1-sum2;

    for(int i=0;i<n;i++){
            sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }

        if(sum!=sum1){
            pf("-1\n");
            return 0;
        }
    }

        for(int i=0;i<n;i++){
            sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[j][i];
        }

        if(sum!=sum1){
            pf("-1\n");
            return 0;
        }
    }


    ll temp2=0;
    for(int i=0;i<n;i++)temp2+=arr[i][i];
    if(temp2!=sum1){
        pf("-1\n");
        return 0;
    }

    temp=0;

    ll j=n-1;
    for(int i=0;i<n;i++){
        temp+=arr[i][j];
        j--;
    }

    if(temp!=sum1){
        pf("-1\n");
        return 0;
    }

    pf("%lld\n",sum1-sum2);
    return 0;
}
