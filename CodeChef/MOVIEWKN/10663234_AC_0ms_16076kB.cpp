#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef unsigned long long ull;
int main(){
	
	int t;
	sc("%d",&t);
	while(t--){
		
		int n;
		sc("%d",&n);
		
		int l[n],r[n];
		
		for(int i=0;i<n;i++)sc("%d",&l[i]);
		for(int i=0;i<n;i++)sc("%d",&r[i]);
		
		int m[n];
		
		for(int i=0;i<n;i++) m[i]=l[i]*r[i];
		
		int ans =0;
		
		for(int i=0;i<n;i++)
		{
			if(m[i]>m[ans])ans=i;
			else if((m[i]==m[ans]) && (r[i]>r[ans]))
				ans=i;
		}
		
		cout<<ans+1<<endl;

	}
}