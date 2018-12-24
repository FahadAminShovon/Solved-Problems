#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	stack<int>s;
	int sum;
	for(int i=0;i<n;i++){
		if(s.empty())s.push(num[i]);
		else{
			sum=s.top()+num[i];
			if(sum%2==0)s.pop();
			else s.push(num[i]);
		}
	}
	cout<<s.size()<<endl;
	return 0;
}