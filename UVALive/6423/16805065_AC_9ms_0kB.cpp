#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define fread freopen("input.txt","r",stdin)

using namespace std;

char arr[]={'A','E','I','O','U'};

string ssss(string str){
    int arr1[26];
    memset(arr1,0,sizeof(arr1));
    int sz1=str.size();

    string f="";

    for(int i=0;i<sz1;i++){
        char x = str[i];
        int cnt=1;
        for(int j=0;j<5;j++){
            if(x==arr[j]){
                cnt=0;
                break;
            }
        }
        if(cnt){
            f.pb(x);
        }
    }

    while(f.size()<4){
            f.pb('Z');
    }

    if(f.size()>4){
        f=f.substr(0,4);
    }

    return f;
}


string ff(string str){
    int sz=str.size();
    string f="";

    for(int i=0;i<sz;i++){
        char x = str[i];
        for(int j=0;j<5;j++){
            if(x==arr[j]){
                f.pb(x);
                break;
            }
        }
    }

    while(f.size()<2){
            f.pb('Z');
    }

    if(f.size()>2){
        f=f.substr(0,2);
    }

    return f;
}

string process(int num){
    stringstream ss ;
    ss<<num;
    string str;
    ss>>str;
    while(str.size()<3){
        str="0"+str;
    }
    return str;
}

int main() {
   // fread;
	string first,last;
	map<string,int>mp;

	while(cin>>first>>last){
		if(first=="-1")break;
		int sz1=first.size();
		int sz2=last.size();

		string s = ssss(last);
		string f = ff(first);

		string str = s+f;

		int res = mp[str];
		mp[str]++;
		string num = process(res);
		cout<<str<<num<<endl;

	}
	return 0;
}
