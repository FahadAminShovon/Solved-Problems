#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back

using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
const int mx =1000005;

ull p_pow[mx],h[mx];

int main() {
	ull p =53;
	p_pow[0]=1;
	for(int i=1;i<mx;i++)p_pow[i]=p_pow[i-1]*p;
	
	string aajaira;
	string niddle,hay;
	int num;
	sc("%d",&num);
//	cout<<num<<endl;
	getline(cin,aajaira);
	int ln,lh;
	for(int z=0;z<num;z++){
		//getline(cin,hay);
		cin>>hay;
	//	cout<<hay<<endl;
		lh=hay.size();
		memset(h,0,sizeof(h));
		
		for(int i=0;i<lh;i++){
			h[i]=hay[i]*p_pow[i];
			if(i)h[i]+=h[i-1];
		}
		
		int x;
		sc("%d",&x);
		string ajaira;
		getline(cin,ajaira);
		
	//	cout<<x<<endl;
		for(int c=0;c<x;c++){
		cin>>niddle;
		ln=niddle.size();
			
		ull niddleHash=0;
		
		for(int i=0;i<ln;i++)niddleHash+=niddle[i]*p_pow[i];
		bool print = true;
		
		
		
		for(int i=0;i<=lh-ln;i++){
		ull c,d;
		if(i==0)c=h[i+ln-1];
		else c=h[i+ln-1]-h[i-1];
		d=niddleHash*p_pow[i];
		if(c==d){
			cout<<"y"<<endl; 
			print=false;
			break;
		}
		
		}
		
		if(print)cout<<"n"<<endl;
		}
	}
	
	
	return 0;
}