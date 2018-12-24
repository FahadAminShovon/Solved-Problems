#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin>>str;
	long long int num=((str[0]-'0')+1) * pow(10,str.size()-1);
	stringstream ssd;
	ssd<<str;
	long long int num1;
	ssd>>num1;
	cout<<num-num1<<endl;
	return 0;
}