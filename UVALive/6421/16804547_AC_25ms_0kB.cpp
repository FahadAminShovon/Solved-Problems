#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define fread freopen("input.txt","r",stdin)
using namespace std;

vector<int> parent(100);
int n;

void make_set(int v) {
    parent[v] = v;
}
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        parent[b] = a;
    }
}

struct Edge {
    int u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight;
    }
} *root;

int kruskal(vector<Edge>edges){
	int cost = 0;
	parent.clear();


	for (int i = 0; i <= n; i++)
    make_set(i);

	sort(edges.begin(), edges.end());

	int sz=edges.size();
	for (int i=0;i<sz;i++) {
    if (find_set(edges[i].u) != find_set(edges[i].v)) {
        cost += edges[i].weight;
        union_sets(edges[i].u, edges[i].v);
        }
    }
    return cost;
}

int main() {
    //fread;
	int v;
	while(sc("%d%d",&n,&v)==2){
		int n1[v],n2[v],w[v];

		for(int i=0;i<v;i++)sc("%d%d%d",&n1[i],&n2[i],&w[i]);

		vector<int>msts;
		vector<Edge>edges;

		for(int i=0;i<v;i++){
			root = new Edge();
			root->u = n1[i];
			root->v = n2[i];
			root->weight = w[i];
			edges.pb(*root);
		}

		int ans = kruskal(edges);
		//cout<<ans<<endl;
		vector<int>results;
		results.pb(ans);

		int cnt = 0;

		for(int i=0;i<v;i++){
            edges.clear();
            for(int j=0;j<v;j++){
                if(j==cnt)continue;
                root = new Edge();
                root->u = n1[j];
                root->v = n2[j];
                root->weight = w[j];
                edges.pb(*root);
            }


            int xx = kruskal(edges);
            if(xx>ans)results.pb(xx);
            cnt++;
		}

		sort(results.begin(),results.end());
		cout<<results[1]<<endl;



	}

	return 0;
}
