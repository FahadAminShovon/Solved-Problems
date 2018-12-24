#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

void solve(){
	int h1,m1,s1,h2,m2,s2;
	sc("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
	int player1=0;
	int player2=0;
	
	player1+=(h1*3600)+(m1*60)+s1;
	player2+=(h2*3600)+(m2*60)+s2;
	
	if(player1<player2)cout<<"Player1"<<endl;
	else if(player1>player2)cout<<"Player2"<<endl;
	else cout<<"Tie"<<endl;
	
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}