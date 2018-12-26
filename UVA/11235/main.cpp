#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define fread freopen("input.txt","r",stdin)
#define fwrite freopen("output.txt","w",stdout)
int idx[200005];
int freq[200005];
int elem[200005];
int temp[200005];
using namespace std;

//int segmentTree[200005*4];
int n,q;
int segmentTree[200005*4];

void constructTree(int input[],int segTree[],int lo,int hi,int pos){
    if(lo==hi){
        segTree[pos]=input[lo];
        return;
    }
    int mid = (hi+lo)/2;
    constructTree(input,segTree,lo,mid,2*pos+1);
    constructTree(input,segTree,mid+1,hi,2*pos+2);
    segTree[pos]=max(segTree[2*pos+1],segTree[2*pos+2]);

}

int rangeminQuery(int segTree[],int qlo,int qhi,int lo,int hi,int pos){
    if(qlo<=lo&&qhi>=hi){
        return segTree[pos];
    }
    if(qlo>hi||qhi<lo){
        return INT_MIN;
    }
    int mid = (hi+lo)/2;

    return max(rangeminQuery(segTree,qlo,qhi,lo,mid,2*pos+1),
               rangeminQuery(segTree,qlo,qhi,mid+1,hi,2*pos+2));
}

void solve(int segmentTree[]){
	int a,b;
	sc("%d%d",&a,&b);
	a--;
	b--;
	int tt=min(a,b);
	b=max(a,b);
	a=tt;
	int tempa=elem[a];
	int tempb=elem[b];
	if(tempa==tempb){
		cout<<b-a+1<<endl;
		return;
	}
	int xx = idx[tempa];
	int yy = idx[tempb];
	xx = xx-a+1;
	yy = b-(yy-freq[tempb]);
	int ans=max(xx,yy);
	//cout<<tempa-100000<<"->"<<freq[tempa]<<"->"<<xx<<"   "<<tempb-100000<<"->"<<freq[tempb]<<"->"<<yy<<endl;
	a+=xx;
	b-=yy;
	//cout<<a<<" "<<b<<endl;
	if(b>=a){
	int zz = rangeminQuery(segmentTree,a,b,0,n-1,0);
	ans=max(ans,zz);
	}
	cout<<ans<<endl;

}

void clean(){
    for(int i=0;i<200005;i++){
        elem[i]=0;
        temp[i]=0;
        freq[i]=0;
        idx[i]=0;
    }
    for(int i=0;i<200005*4;i++)segmentTree[i]=0;

}

int main() {
   // fread;
   // fwrite;
	//int n,q;
	while(sc("%d",&n)==1&&n!=0){
    sc("%d",&q);
    clean();
	for(int i=0;i<n;i++){
		int x;
		sc("%d",&x);
		x+=100000;
		elem[i]=x;
		temp[i]=x;
		freq[x]++;
		idx[x]=i;
	}

	for(int i=0;i<n;i++){
		temp[i]=freq[temp[i]];
	}

	constructTree(temp,segmentTree,0,n-1,0);

	for(int i=0;i<q;i++){
		solve(segmentTree);
	}
	}

	return 0;
}
