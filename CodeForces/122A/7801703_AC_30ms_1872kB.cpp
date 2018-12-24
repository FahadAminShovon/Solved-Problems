#include <iostream>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	if(x%7==0||x%4==0||x%44==0||x%47==0||x%74==0||x%77==0||x%444==0||x%447==0||x%474==0||x%477==0||x%777==0||x%747==0||x%774==0||x%744==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}