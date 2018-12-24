#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sc4(a,b,c,d) scanf("%d,%d,%d,%d",&a,&b,&c,&d)
#define loop(i,n) for(int i=0;i<n;i++)
#define cLoppp(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define all(a) a.begin(),a.end
#define ub upper_bound
#define lb lower_bound
#define bs binary_search
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define pb push_back
#define mp make_pair

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int summer(int x){
	if(x<10) return x;
	int c =0;
	while(x!=0){
		int d=x%10;
		c+=d;
		x=x/10;
	}
	return summer(c);
}


string onlyAlpha(string str){
	int sz = str.size();
	string str1="";
	for(int i=0;i<sz;i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			str1+=str[i];
		}
	}
	return str1;
}

string lowerCase(string str){
	int sz = str.size();
	for(int i=0;i<sz;i++){
		str[i]=tolower(str[i]);
	}
	return str;
}

int  val(string str){
	str= onlyAlpha(str);
	str=lowerCase(str);
	int sz = str.size();
	int counter=0;
	for(int i=0;i<sz;i++){
		counter+=str[i]-'a'+1;
	}
	counter=summer(counter);
	return counter;
}

int main() {
	string str1;
	string str2;
	while(getline(cin,str1)){
		getline(cin,str2);
		int x = val(str1);
		int y= val(str2);
	//	cout<<x<<" "<<y<<endl;
		if(y>x){
			int temp=y;
			y=x;
			x=temp;
		}
		if(x==0&&y==0)cout<<endl;
           else{
			double z=(y*100.0/x);
			printf("%.2lf %\n",z);
		  }
		
	}
}