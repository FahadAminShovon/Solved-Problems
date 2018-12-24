#include <bits/stdc++.h>

using namespace std;



int main() {

	int iPosition, c1, c2, c3;

	while (scanf("%d %d %d %d", &iPosition, &c1, &c2, &c3)==4) {
        
        if((iPosition==0)&&(c1==0)&&(c2==0)&&(c3==0))
        {
        	break;
        }
        
        
        int ans=(360*3);
		int a=(iPosition-c1);
		if(a>0)
		{
			a=a*9;
		}
		else
		{
			a=(a+40)*9;
		}
		
		int b=(c2-c1);
		if(b>0)
		{
			b=b*9;
		}
		else
		{
			b=(b+40)*9;
		}
		
		int c=(c2-c3);
		if(c>0)
		{
			c=c*9;
		}
		else
		{
			c=(c+40)*9;
		}
		ans = ans+a+b+c;

		printf("%d\n", ans);

	}

	return 0;

}