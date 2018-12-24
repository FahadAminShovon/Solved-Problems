#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	scanf("%d",&x);
	vector<int>seq1;
	int w;
	for(int i=0;i<x;i++){
		cin>>w;
		seq1.push_back(w);
	}
	scanf("%d",&y);
	vector<int>seq2;
	vector<int>v;
	for(int i=0;i<y;i++)
	{
		cin>>w;
		seq2.push_back(w);
		v.push_back(w);
	}
	
	sort(v.begin(),v.end());
	v.erase (unique(v.begin(),v.end()),v.end());
	
	sort(seq1.begin(),seq1.end());
	sort(seq2.begin(),seq2.end());
	
	for(int i=0;i<v.size();i++)
	{
		//cout<<v[i]<<endl;
	  int index1=(upper_bound(seq1.begin(),seq1.end(),v[i])-seq1.begin())-(lower_bound(seq1.begin(),seq1.end(),v[i])-seq1.begin());
	  int index2=(upper_bound(seq2.begin(),seq2.end(),v[i])-seq2.begin())-(lower_bound(seq2.begin(),seq2.end(),v[i])-seq2.begin());
	   //cout<<index1<<" "<<index2<<endl; 
	    if(index2!=index1)
	    {
	    	cout<<v[i];
	    	if(i!=v.size()-1){
	    		cout<<" ";
	    	}
	    }
	}
	cout<<"\n";
	
	return 0;
}