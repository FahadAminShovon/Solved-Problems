#include <iostream>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		unsigned long long int a;
		cin>>a;
		cout<<192+(a-1)*250<<endl;
	}
	return 0;
}