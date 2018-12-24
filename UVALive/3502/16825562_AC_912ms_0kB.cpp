#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define fread freopen("input.txt","r",stdin)

using namespace std;
map<int , vector<int> >mp;


void input(){
    int a;
    int n;
    sc("%d%d",&a,&n);
    for(int i=0;i<n;i++){
        int xx;
        sc("%d",&xx);
        mp[a].pb(xx);
        mp[xx].pb(a);
    }
}


int bfs(int s,int e){
    map<int,int>visited;
    visited[s]=0;
    queue<int>q;
    q.push(s);

    while(!q.empty()){
        int p=q.front();
        q.pop();
        int sz= mp[p].size();

        for(int i=0;i<sz;i++){
            int temp = mp[p][i];
            if(!visited.count(temp)){
                q.push(temp);
                if(temp==e)return visited[p];
                visited[temp]=visited[p]+1;
            }
        }
    }
}

void solve(){
    mp.clear();
    int n;
    sc("%d",&n);

    for(int i=0;i<n;i++){
        input();
    }

    int s,e;
    sc("%d%d",&s,&e);


    int ans = bfs(s,e);
    pf("%d %d %d",s,e,ans);

}


int main()
{
    //fread;
    int n;
    sc("%d",&n);
    for(int i=0;i<n;i++){
        solve();
        cout<<"\n";
        if(i!=n-1)cout<<"\n";
    }

    return 0;
}
