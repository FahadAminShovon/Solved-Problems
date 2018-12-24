#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back

using namespace std;

map<int,vector<int> >mp;

int node;

void pusher(int a,int b){
	mp[a].pb(b);
	mp[b].pb(a);
}

void bfs(int start){
	int w=node+1;
	int level[w];
	memset(level,-1,sizeof(level));
	
	queue<int>q;
	q.push(start);
	level[start]=0;
	
	while(!q.empty()){
		int v=q.front();
		q.pop();
		int sz =mp[v].size();
		
		for(int i=0;i<sz;i++){
			int temp = mp[v][i];
			if(level[temp]==-1){
				level[temp]=level[v]+6;
				q.push(temp);
			}
		}
		
	}
	for(int i=1;i<=node;i++){
		if(level[i]!=0)pf("%d ",level[i]);
	}
	cout<<"\n";
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		int edge;
		sc("%d%d",&node,&edge);
		for(int j=0;j<edge;j++){
			int a,b;
			sc("%d%d",&a,&b);
			pusher(a,b);
		}
		int start;
		sc("%d",&start);
		bfs(start);
		mp.clear();
	}
	
	return 0;
}