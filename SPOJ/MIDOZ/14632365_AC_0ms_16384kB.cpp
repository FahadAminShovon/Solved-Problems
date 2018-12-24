    #include <bits/stdc++.h>
    #define sc scanf
    #define pf printf
    #define pb push_back
    using namespace std;
     
    int main() {
    	int n;
    	sc("%d",&n);
    	for(int i=0;i<n;i++){
    		int n,k;
    		sc("%d%d",&n,&k);
    		int sum=0;
    		for(int i=0;i<n;i++){
    			int s;
    			sc("%d",&s);
    			sum+=s/k;
    		}
    		cout<<sum<<endl;
    	}
    	return 0;
    }