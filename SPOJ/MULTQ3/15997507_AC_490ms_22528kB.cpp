#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define fread freopen("input.txt","r",stdin)

using namespace std;

int nextPowofTwo(int num){
    int xx=1;
    while(num>xx){
        xx<<=1;
    }
    return xx;
}


const int N = 100005;




struct segment{
    int count0;
    int count1;
    int count2;

    void add(){
        int temp = count0;
        count0=count2;
        count2=count1;
        count1=temp;
    }

    void mergee(segment left,segment right){
        count0=left.count0+right.count0;
        count1=left.count1+right.count1;
        count2=left.count2+right.count2;
    }
};

segment segTree[N*4];
int lazy[N*4];

void constructTree(int lo,int hi,int pos){
    if(lo==hi){
        segTree[pos].count0=1;
        segTree[pos].count1=0;
        segTree[pos].count2=0;
        return;
    }
    int mid = (hi+lo)/2;
    constructTree(lo,mid,2*pos+1);
    constructTree(mid+1,hi,2*pos+2);
    segTree[pos].mergee(segTree[2*pos+1],segTree[2*pos+2]);

}


/*void updateSegmentTreeRange(segment segTree[],int startRange,int endRange,int lo,int hi,int pos){
    if(lo>hi||startRange>hi||endRange<lo){
        return;
    }

    if(lo==hi){
        segTree[pos].add();
        return;
    }
    int mid = (hi+lo)/2;

    updateSegmentTreeRange(segTree,startRange,endRange,lo,mid,pos*2+1);
    updateSegmentTreeRange(segTree,startRange,endRange,mid+1,hi,pos*2+2);

    segTree[pos].mergee(segTree[2*pos+1],segTree[2*pos+2]);

}*/



void update(int lo,int hi,int lq,int hq,int pos){
    if(lazy[pos]%3==1){
        segTree[pos].add();
        if(lo!=hi){
            lazy[pos*2+1]+=lazy[pos]%3;
            lazy[pos*2+2]+=lazy[pos]%3;
        }
    }
    else if(lazy[pos]%3==2){
        segTree[pos].add();
        segTree[pos].add();
        if(lo!=hi){
            lazy[pos*2+1]+=lazy[pos]%3;
            lazy[pos*2+2]+=lazy[pos]%3;
        }
    }

    /*else if(lazy[pos]&&lazy[pos]%3==0){
        if(lo!=hi){
            lazy[pos*2+1]+=lazy[pos]%3;
            lazy[pos*2+2]+=lazy[pos]%3;
        }
    }*/
    lazy[pos]=0;


    if(lo>hi||lo>hq||hi<lq)return;

    if(lq<=lo&&hq>=hi){
        segTree[pos].add();
        if(lo!=hi){
            lazy[pos*2+1]++;
            lazy[pos*2+2]++;
        }
        return;
    }

    int mid = (hi+lo)/2;

    update(lo,mid,lq,hq,pos*2+1);
    update(mid+1,hi,lq,hq,pos*2+2);

    segTree[pos].mergee(segTree[pos*2+1],segTree[pos*2+2]);

}


/*void updateSegmentTreeRange(int sizeArr,segment segTree[],int startRange,int endRange){
    updateSegmentTreeRange(segTree,startRange,endRange,0,sizeArr-1,0);
}*/

/*int rangeminQuery(segment segTree[],int qlo,int qhi,int lo,int hi,int pos){
    if(qlo<=lo&&qhi>=hi){
        return segTree[pos].count0;
    }
    if(qlo>hi||qhi<lo){
        return 0;
    }
    int mid = (hi+lo)/2;

    return rangeminQuery(segTree,qlo,qhi,lo,mid,2*pos+1)+
               rangeminQuery(segTree,qlo,qhi,mid+1,hi,2*pos+2);
}
*/
segment query(int lo,int hi,int lq,int hq,int pos){
    segment ans;
    ans.count0=0;
    ans.count1=0;
    ans.count2=0;

    if(lazy[pos]%3==1){
        segTree[pos].add();
        if(lo!=hi){
            lazy[pos*2+1]+=lazy[pos];
            lazy[pos*2+2]+=lazy[pos];
        }
    }
    else if(lazy[pos]%3==2){
        segTree[pos].add();
        segTree[pos].add();
        if(lo!=hi){
            lazy[pos*2+1]+=lazy[pos];
            lazy[pos*2+2]+=lazy[pos];
        }
    }
    else if(lazy[pos]&&lazy[pos]%3==0){
        if(lo!=hi){
            lazy[pos*2+1]+=lazy[pos];
            lazy[pos*2+2]+=lazy[pos];
        }
    }

    lazy[pos]=0;
    if(lo>hi||lo>hq||hi<lq)return ans;

    if(lq<=lo&&hq>=hi)return segTree[pos];

    int mid = (hi+lo)/2;

    segment left = query(lo,mid,lq,hq,pos*2+1);
    segment right = query(mid+1,hi,lq,hq,pos*2+2);

    ans.mergee(left,right);

    return ans;


}


int main()
{
    //fread;
    int n,q;
    sc("%d%d",&n,&q);


   // p2 = nextPowofTwo(n);

    //segment segTree[4*n];


    constructTree(0,n-1,0);
    int startRange,endRange;
    int a;

    for(int i=0;i<q;i++){
    sc("%d",&a);
    sc("%d%d",&startRange,&endRange);
    if(a==0){
        //updateSegmentTreeRange(n,segTree,startRange,endRange);
        update(0,n-1,startRange,endRange,0);
    }
    else {
        segment ans = query(0,n-1,startRange,endRange,0);
        pf("%d\n",ans.count0);
    }
    }

    return 0;
}
