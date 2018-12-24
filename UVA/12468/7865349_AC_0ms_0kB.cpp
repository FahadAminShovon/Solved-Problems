#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,t;
	while(scanf("%d%d",&x,&t)==2){;
        if((x<0)||(t<0))
        {
        	break;
        }
        int y=abs(t-x);
        if(y>50)
        {
        	y=100-y;
        }
        cout<<y<<endl;
	
	}
	return 0;
}