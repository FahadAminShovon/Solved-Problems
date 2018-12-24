#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;


int arr[12][3];
int res[3];

void clean(){
	for(int i=0;i<12;i++){
		for(int k=0;k<3;k++){
			arr[i][k]=0;
		}
	}
	
	for(int i=0;i<3;i++)res[i]=0;
}


void input(){
	for(int i=0;i<3;i++){
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		
		int sz=s1.size();
		
		for(int j=0;j<sz;j++){
			arr[s1[j]-'A'][i]=1;
			arr[s2[j]-'A'][i]=-1;
		}
		
		if(s3=="even")res[i]=0;
		else if(s3=="down")res[i]=-1;
		else res[i]=1;
	}
}

void solve(){
	
	for(int j=0;j<12;j++){
			if(arr[j][0]==res[0]&&arr[j][1]==res[1]&&arr[j][2]==res[2]){
				cout<<char('A'+j)<<" is the counterfeit coin and it is heavy."<<endl;
				break;
			}
			else if(arr[j][0]==-res[0]&&arr[j][1]==-res[1]&&arr[j][2]==-res[2]){
				cout<<char('A'+j)<<" is the counterfeit coin and it is light."<<endl;  
            	break; 
			}
		}
}

int main() {
	int n;
	sc("%d",&n);
	
	for(int i=0;i<n;i++){
		clean();
		input();
		solve();
	}
	return 0;
}