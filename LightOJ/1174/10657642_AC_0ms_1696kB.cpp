#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define pii pair<int,int>
#define mem(a) memset(a,0,sizeof(a))

using namespace std;
const int mx = 100000080;
typedef long long int ll;
typedef unsigned long long ull;
map<int,vector<int> >mp;



int level1[105],level2[105],visited[105];

void bfs1(int from){
    mem(level1);
    mem(visited);

    queue<int>q;
    q.push(from);

    visited[from]=1;
    level1[from]=0;

    while(!q.empty()){
        int top=q.front();
        q.pop();
        int sz=mp[top].size();

        for(int i=0;i<sz;i++){
            int temp=mp[top][i];
            if(visited[temp]==0){
                visited[temp]=1;
                level1[temp]=level1[top]+1;
                q.push(temp);
            }
        }
    }
}

void bfs2(int from){
    mem(level2);
    mem(visited);

    queue<int>q;
    q.push(from);

    visited[from]=1;
    level2[from]=0;

    while(!q.empty()){
        int top=q.front();
        q.pop();
        int sz=mp[top].size();

        for(int i=0;i<sz;i++){
            int temp=mp[top][i];
            if(visited[temp]==0){
                visited[temp]=1;
                level2[temp]=level2[top]+1;
                q.push(temp);
            }
        }
    }
}


int main() {
	int num;
	sc("%d",&num);
	
	for(int i=1;i<=num;i++){
		
	int b;
	sc("%d",&b);
	int c;
	sc("%d",&c);
	
	for(int j=0;j<c;j++){
		int b1,b2;
		sc("%d%d",&b1,&b2);
		mp[b1].pb(b2);
		mp[b2].pb(b1);
	}
	
	
	int start,end;
	sc("%d%d",&start,&end);
	bfs1(start);;
	//mem(visited);
	bfs2(end);
	
	int ans=0;
	for(int k=0;k<b;k++){
		ans=max(ans,level2[k]+level1[k]);
	}
	
	
	pf("Case %d: %d\n",i,ans);
	
	mp.clear();
	}
	
	return 0;
}