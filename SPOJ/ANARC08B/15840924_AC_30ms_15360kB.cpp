#include <bits/stdc++.h>
using namespace std;

map<string,int>mp;
map<char,string>mpp;
void assign(){
mp["063"]=0;
mp["010"]=1;
mp["093"]=2;
mp["079"]=3;
mp["106"]=4;
mp["103"]=5;
mp["119"]=6;
mp["011"]=7;
mp["127"]=8;
mp["107"]=9;

mpp['0']="063";
mpp['1']="010";
mpp['2']="093";
mpp['3']="079";
mpp['4']="106";
mpp['5']="103";
mpp['6']="119";
mpp['7']="011";
mpp['8']="127";
mpp['9']="107";
}

int codetoDec(string str){
	int sz = str.size();
	int len = sz/3;
	int mul=pow(10,len-1);
	int sum=0;
	string code=""; 
	for(int i=0;i<sz;i++){
		code.push_back(str[i]);
		if(code.size()==3){
			sum+=mp[code]*mul;
			mul/=10;
			code="";
		}
	}
	return sum;
}

int main() {
	assign();
	string str;
	while(getline(cin,str)){
	if(str=="BYE")break;
	int i=0;
	string str1="";
	for(i=0;str[i]!='+';i++){
		str1.push_back(str[i]);
	}
	i++;
	string str2="";
	for(;str[i]!='=';i++){
		str2.push_back(str[i]);
	}
	
	int num1 = codetoDec(str1);
	int num2=codetoDec(str2);
	int sum=num1+num2;
	stringstream ss;
	ss<<sum;
	string ans;
	ss>>ans;
	int sz=ans.size();
	
	cout<<str1<<"+"<<str2<<"=";
	for(int i=0;i<sz;i++){
		cout<<mpp[ans[i]];
	}
	cout<<endl;
	}
}