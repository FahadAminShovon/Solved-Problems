#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define fread freopen("input.txt","r",stdin)
using namespace std;
typedef long long int ll;
int segsize;

int toInt(string str){
    stringstream ssd;
    ssd<<str;
    int x;
    ssd>>x;
    return x;
}

int nextpowof2(int num){
    if(num==0)return 1;
    if(num>0&&(num&(num-1)==0))return num;
    while((num&(num-1))!=0)num=num&(num-1);
    return num<<1;
}

void constructMinSegmentTree(ll segmentTree[], ll input[], int low, int high,int pos){
        if(low == high){
            segmentTree[pos] = input[low];
            return;
        }
        int mid = (low + high)/2;
        constructMinSegmentTree(segmentTree, input, low, mid, 2 * pos + 1);
        constructMinSegmentTree(segmentTree, input, mid + 1, high, 2 * pos + 2);
        segmentTree[pos] = (segmentTree[2*pos+1]+ segmentTree[2*pos+2]);
}

void createSegmentTree(ll *input,ll segmentTree[],int segsz,int inputsz){
    for(int i=0;i<segsz;i++){
            segmentTree[i]=0;
    }
    constructMinSegmentTree(segmentTree,input,0,inputsz-1,0);
}

void updateSegmentTree(ll segmentTree[],ll index,int delta,int lo,int hi,int pos){

    if(index<lo||index>hi)return;

    if(lo==hi){
        segmentTree[pos]=delta;
        return;
    }

    int mid = (hi+lo)/2;

    updateSegmentTree(segmentTree,index,delta,lo,mid,2*pos+1);
    updateSegmentTree(segmentTree,index,delta,mid+1,hi,2*pos+2);
    segmentTree[pos]=(segmentTree[2*pos+1]+segmentTree[2*pos+2]);
}

void updateSegmentTree(ll input[],ll segmentTree[],int index,int delta,int inputSz){
    input[index]=delta;

    updateSegmentTree(segmentTree,index,delta,0,inputSz-1,0);
}

int rangeMinimumQuery(ll segmentTree[],int low,int high,int qlow,int qhigh,int pos){
     if(qlow <= low && qhigh >= high){
        return segmentTree[pos];
        }
    if(qlow > high || qhigh < low){
            return 0;
        }
    int mid = (low+high)/2;
    return (rangeMinimumQuery(segmentTree, low, mid, qlow, qhigh, 2 * pos + 1)+
                rangeMinimumQuery(segmentTree, mid + 1, high, qlow, qhigh, 2 * pos + 2));
}

int rangeMinimumQuery(ll segmentTree[],int qlow,int qhigh,int len){
        return rangeMinimumQuery(segmentTree,0,len-1,qlow,qhigh,0);
}



bool solve(int n){
    ll arr[n];
    for(int i=0;i<n;i++)sc("%lld",&arr[i]);
    segsize=nextpowof2(n)*2-1;
    ll segmentTree[segsize];
    createSegmentTree(arr,segmentTree,segsize,n);

    string str;
    getline(cin,str);
    bool print=true;
    while(1){
        getline(cin,str);
        if(str=="END"){
            break;
        }
        string a;
        int b,c;

       stringstream ssd;
        ssd<<str;
        ssd>>a>>b>>c;
        if(a=="M"){
            if(print==false)pf("\n");
            print=false;
            int ans=rangeMinimumQuery(segmentTree,b-1,c-1,n);
            pf("%d",ans);
        }
        else updateSegmentTree(arr,segmentTree,b-1,c,n);

    }

}


int main()
{
    //fread;
    int n;
    int c=1;
    while(sc("%d",&n)==1){
        if(n==0){
                pf("\n");
                break;
        }
        if(c!=1)
        pf("\n\n");
        pf("Case %d:\n",c++);
        solve(n);
    }

    return 0;
}
