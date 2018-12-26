#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define fread freopen("input.txt","r",stdin)

using namespace std;

const int MX= 200005;
const int s = 100000;
int n[MX];
int cnt[MX];
int start[MX];
int segsize;

int nextPowof2(int num){
    if(num==0)return 1;
    if(num>0&&(num&(num-1))==0)return num;
    while((num&(num-1))>0){
        num=num&(num-1);
    }
    return num<<1;
}

void clean(int arr[]){
    memset(arr,0,MX);
}


/*void constructMinSegmentTree(int segmentTree[], int input[], int low, int high,int pos){
        if(low == high){
            segmentTree[pos] = cnt[ n[ low ] ];
            return;
        }
        int mid = (low + high)/2;
        constructMinSegmentTree(segmentTree, input, low, mid, 2 * pos + 1);
        constructMinSegmentTree(segmentTree, input, mid + 1, high, 2 * pos + 2);
        segmentTree[pos] = max(segmentTree[2*pos+1], segmentTree[2*pos+2]);
}


void createSegmentTree(int *input,int segmentTree[],int segsz,int inputsz){
    for(int i=0;i<segsz;i++){
            segmentTree[i]=INT_MIN;
    }
    constructMinSegmentTree(segmentTree,input,0,inputsz-1,0);
}
*/
#define MAX2 1000000
int sTree[ MAX2 ];

void makeTree(int nodeNumber , int s, int e ){
 if( s == e ) {
  sTree[ nodeNumber ] = cnt[ n[ s ] ];
  return ;
 }
 int md = ( s + e ) / 2;
 int n1 = ( 2 * nodeNumber ) + 1;
 int n2 = n1 + 1;
 makeTree( n1, s , md ) ;
 makeTree( n2, md + 1, e );
 if( sTree[ n1 ] >= sTree[ n2 ] ) sTree[ nodeNumber ] = sTree[ n1 ];
 else sTree[ nodeNumber ] = sTree[ n2 ];
}

/*int rangeMinimumQuery(int segmentTree[],int low,int high,int qlow,int qhigh,int pos){
     if(qlow <= low && qhigh >= high){
        return segmentTree[pos];
        }
    if(qlow > high || qhigh < low){
            return INT_MIN;
        }
    int mid = (low+high)/2;
    return max(rangeMinimumQuery(segmentTree, low, mid, qlow, qhigh, 2 * pos + 1),
                rangeMinimumQuery(segmentTree, mid + 1, high, qlow, qhigh, 2 * pos + 2));
}


int rangeMinimumQuery(int segmentTree[],int qlow,int qhigh,int len){
        return rangeMinimumQuery(segmentTree,0,len-1,qlow,qhigh,0);
}
*/

int makeQuery( int nodeNumber, int s, int e, int r1, int r2 ) {
 int ret ;
 if( e < r1 || s > r2 ) return -1;
 if( s >= r1 && e <= r2 ) return sTree[ nodeNumber ];
 int n1 = ( 2 * nodeNumber ) + 1;
 int n2 = ( 2 * nodeNumber ) + 2;
 int md = ( s + e ) / 2;
 int v1 = makeQuery( n1, s, md , r1, r2 );
 int v2 = makeQuery( n2, md + 1, e, r1, r2 );
 if( v1 == -1 ) ret = v2;
 if( v2 == -1 ) ret = v1;
 if( v1 >= v2 ) ret = v1;
 else ret = v2;
 return ret;
}

int ansDaw(int strt,int e,int segmentTree[],int N){

    //for(int i=0;i<N;i++)cout<<n[start]<<" ";
    //cout<<endl;

    if(n[strt]==n[e])return strt-e+1;

    int fri1= cnt[n[strt]]+start[n[strt]]-strt;
    int fri2= e-start[n[e]]+1;
    //cout<<"*"<<fri1<<" "<<fri2<<endl;
    int ans = max(fri1,fri2);
    int r1=start[n[strt]]+cnt[n[strt]];
    int r2=start[n[e]]-1;
    //cout<<"**"<<r1<<" "<<r2<<endl;
    int fri3 = makeQuery( 0, 0, N - 1, r1, r2 );
    ans=max(ans,fri3);
    return ans;
}

void solve(int num,int q){
    memset(cnt,0,sizeof(cnt));

    memset(start,-1,sizeof(start));


    for(int i=0;i<num;i++){
        sc("%d",&n[i]);
        //cout<<i<<" ";
        n[i]+=s;
        cnt[n[i]]++;
        if(cnt[n[i]]==1)start[n[i]]=i;
    }
    //cout<<endl;

    //cout<<num<<" "<<q<<endl;

    //for(int i=0;i<num;i++){
     //   cout<<n[i]-s<<" ";
    //}
    //cout<<endl;

    //for(int i=0;i<num;i++){
     //   cout<<cnt[n[i]]<<" ";
    //}
    //cout<<endl;
   // for(int i=0;i<num;i++){
    //    cout<<start[n[i]]<<" ";
    //}
    //cout<<endl;

    //segsize=nextPowof2(num)*2-1;
    //int segmentTree[segsize];

    //createSegmentTree(cnt,segmentTree,segsize,num);

    //cout<<rangeMinimumQuery(segmentTree,0,9,N)-s<<endl;

    //cout<<q<<endl;
    //memset(sTree,0,sizeof(sTree));
    makeTree( 0, 0, num - 1 );
    for(int i=0;i<q;i++){
        int strt,e;
        sc("%d%d",&strt,&e);
        //cout<<start<<" "<<e<<endl;
       // cout<<strt<<" "<<e<<endl;
        strt--;
        e--;
        int ans = ansDaw(strt,e,sTree,num);
        cout<<ans<<endl;
    }

   // cout<<rangeMinimumQuery(segmentTree,2,6,num)<<endl;;


}

int main()
{
    fread;
    int num;
    while(sc("%d",&num)==1){
            //cout<<num<<endl;
        if(num==0)break;
        int q;
        sc("%d",&q);
        solve(num,q);
        //cout<<N<<" "<<q<<endl;
    }

    return 0;
}
