#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define fread freopen("input.txt","r",stdin)
#define pii pair<int,int>
#define ff first
#define ss second

using namespace std;

map<int,vector<int> >mp;
map<int,int>inTime;
map<int,int>outTime;
int visit[105];
map<int,int>::iterator it;
int longest,destiny;
void clean(){
    mp.clear();
    inTime.clear();
    outTime.clear();
    destiny=0;
    longest=0;
    memset(visit,-1,sizeof(visit));
}


void bfs(int start){
    queue<pii>q;
    q.push(pii(start,0));

    pii temp;

    while(!q.empty()){
        temp=q.front();
        q.pop();

        int a =temp.ff;
        int b=temp.ss;

        if(b>visit[a]){
            visit[a]=b;

            if(b>longest){
                longest=b;
                destiny=a;
            }
            else if(b==longest&&a<destiny)destiny=a;

            int sz=mp[a].size();
            for(int i=0;i<sz;i++){
                int w= mp[a][i];
                int x = b+1;
                q.push(pii(w,x));
            }
        }

    }
}

int main()
{
    //fread;
    int n;
    int c=1;
    bool print=false;
    while(sc("%d",&n)==1){
        if(n==0)break;
        clean();
        //int v;
        //sc("%d",&v);
        int start;
        sc("%d",&start);
        //cout<<start<<endl;
        int p,q;
        while(sc("%d%d",&p,&q)==2){
            if(p==0&&q==0)break;
            mp[p].pb(q);
        }
        bfs(start);
        if(print)cout<<"\n";
        print=true;
        pf("Case %d: The longest path from %d has length %d, finishing at %d.\n",c++,start,longest,destiny);
    }
    cout<<endl;
    return 0;
}
