#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    scanf("%d",&x);
    while(x>0)
    {
    	int a,b,c;
    	scanf("%d%d%d",&a,&b,&c);
        cout<<c*(2*a-b)/(a+b)<<endl;
        x--;
    }

return 0;
}