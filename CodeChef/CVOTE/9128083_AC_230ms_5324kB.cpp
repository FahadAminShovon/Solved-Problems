#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string,string>chef_country;
	map<string,int>chef_vote;
	map<string,int>country_vote;
	
	map<string,int>:: iterator it;
	//map<string,int>:: iterator it1;
	
	int m,n;
	scanf("%d%d",&m,&n);
	getchar();
	string country,chef;
	
	for(int i=0;i<m;i++){
		cin>>chef>>country;
		chef_country[chef]=country;
	}
	
	for(int i=0;i<n;i++){
		cin>>chef;
		string str=chef_country[chef];
		chef_vote[chef]++;
		country_vote[str]++;
	}
	//it1=country_vote.begin();
	//it=chef_vote.begin();
	int max_vote=0;
	string best_chef="";
	for(it=chef_vote.begin();it!=chef_vote.end();it++){
		if(it->second>max_vote){
			max_vote=it->second;
			best_chef=it->first;
		}
	}
	int max_country_vote=0;
	string best_country="";
	
	for(it=country_vote.begin();it!=country_vote.end();it++){
		if(it->second>max_country_vote){
			max_country_vote=it->second;
			best_country=it->first;
		}
	}
	
	cout<<best_country<<endl;
	cout<<best_chef<<endl;
	return 0;
}