#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
   	 if (a == 0) return b;
       	 else if (b == 0) return a;

 if (a < b) return gcd(a, b % a);
        	 else return gcd(b, a % b);
 }


int gc(string s){
	stringstream ssd;
	ssd<<s;
	int t;
	vector<int>v;
	while(ssd>>t)
	{
		v.push_back(t);
	}
	vector<int>g;
	for(int i=0;i<v.size()-1;i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			int x=gcd(v[i],v[j]);
			g.push_back(x);
		}
	}
	sort(g.begin(),g.end());
	return g[g.size()-1];
}

int main() {
	int x;
	scanf("%d",&x);
	string ajaira;
	cin>>ajaira;
	while(x--){
	string str;
	getline(cin,str);
    cout<<gc(str)<<endl;
	}
	return 0;
}