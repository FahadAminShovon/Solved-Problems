#include <bits/stdc++.h>
#define pf printf
#define sc scanf
#define pb push_back
using namespace std;

map<string, vector<string> > mp;
map<string, vector<string> > :: iterator it;
map<string, int> visited;

int bfs(string start,string to){
	visited.clear();
	
	queue<string>q;
	q.push(start);
	visited[start]=0;
	
	while(!q.empty()){
		string top=q.front();
		q.pop();
		int sz=mp[top].size();
		for(int i=0;i<sz;i++){
			string temp=mp[top][i];
			if(!visited.count(temp)){
				visited[temp]=visited[top]+1;
				q.push(temp);
				if(temp==to) return visited[temp];
			}
		}
	}
	return 0;
}

string ajaira;
int main() {
	int n;
	sc("%d",&n);
	getline(cin,ajaira);
	
	string str;
	while(n--){
		cin>>str;
		while(str!="*"){
			mp[str];
			
			for(it=mp.begin();it!=mp.end();it++){
				string temp = it->first;
				int tempSz=temp.size();
				int sz = str.size();
				int diff=0;
				if(tempSz=sz){
					for(int i=0;i<sz && diff<2;i++){
						if(temp[i]!=str[i]) diff++;
					}
					if(diff==1){
						mp[temp].pb(str);
						mp[str].pb(temp);
					}
				}
			}
			cin>>str;
		}
		
		string line;
		getline(cin,ajaira);
		
		while(getline(cin,line)&&line!=""){
			stringstream ssd;
			ssd<<line;
			string str[2];
			int c=0;
			string s;
			while(ssd>>s){
				str[c]=s;
				c++;
			}
			string start,to;
			start=str[0];
			to=str[1];
			int ans = bfs(start,to);
			cout<<start<<" "<<to<<" "<<ans<<endl;
		}
		mp.clear();
		if(n != 0)cout<<endl;
		
	}
	
	return 0;
}