#include <bits/stdc++.h>
using namespace std;

int main() {
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	string sentence;
	getline(cin,sentence);
	int x=sentence.size();
	
	for(int counter=0;counter<x;counter++)
	{
		sentence[counter]=toupper(sentence[counter]);
	}
	
	int breaker=0;
	
	for(int counter=0;counter<26;counter++)
	{
		int letter=0;
		for(int check=0;check<x;check++)
		{
			if(alpha[counter]==sentence[check])
			{
				letter++;
			}
		}
		//cout<<letter<<endl;
		if(letter==0)
		{
			breaker++;
			break;
		}
	}
	//cout<<breaker<<endl;
	if(breaker==1)
	{
		cout<<"not pangram"<<endl;
	}
	else
	{
	     cout<<"pangram"<<endl;	
	}

	
	return 0;
}