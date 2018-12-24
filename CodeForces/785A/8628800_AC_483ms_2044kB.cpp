#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	string str;
	int sum=0;
	for(int i=0;i<x;i++){
		cin>>str;
		if(str=="Tetrahedron")sum+=4;
		if(str=="Cube")sum+=6;
		if(str=="Octahedron")sum+=8;
		if(str=="Dodecahedron")sum+=12;
		if(str=="Icosahedron")sum+=20;
	}
	cout<<sum<<endl;
	return 0;
}