#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		int gray,white,ball;
		int _xor=0;
		scanf("%d",&ball);
		for(int i=0; i<ball; i++){
			scanf("%d %d", &gray, &white);	
			_xor^= (white-gray-1);	
		}
		if(_xor==0){
			printf("Case %d: Bob\n", i);
		} else{
			printf("Case %d: Alice\n", i);
		}
	}
	return 0;
}