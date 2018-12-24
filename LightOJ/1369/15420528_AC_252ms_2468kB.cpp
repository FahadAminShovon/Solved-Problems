#include <bits/stdc++.h>
using namespace std;


long long a[100010];

long long f( long long A[], int n ) {                                                                     
    long long ans = 0;
    for( int i = 0; i < n; i++ ){                                                                                            
            ans+= (n-(i*2+1))*A[i];    
    }
    return ans;                                                                                                             
}                                                                                                                           


int main() {
    int i,j,t,k,m,n,h,x,y,q;       
    scanf("%d",&t);                                                                                                         
    for(k=1;k<=t;k++)                                                                                                       
    {                                                                                                                       
        scanf("%d%d",&n,&q);                                                                                                
        printf("Case %d:\n",k);                                                                                             
        for(i=0;i<n;i++)                                                                                                    
           scanf("%lld",&a[i]);                                                                                             
        long long sum=f(a,n),v;                                                                                             
        while(q--)                                                                                                          
        {                                                                                                                   
            scanf("%d",&h);                                                                                                 
            if(h==1)                                                                                                        
               printf("%lld\n",sum);                                                                                        
            else if(h==0)                                                                                                   
            {                                                                                                               
                scanf("%d%lld",&x,&v);                                                                                      
                long long posmul=n-(x*2+1);                                                                                       
                sum+=posmul*(v-a[x]);
		a[x]=v;                                                                                         
            }                                                                                                               
        }                                                                                                                   
    }                                                                                                                       
    return 0;                                                                                                               
}                                                                                                                         