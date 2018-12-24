#include <bits/stdc++.h>
using namespace std;


int main() {
     int x;
     scanf("%d",&x);
     for(int i=1;i<=x;i++)
     {
     	long long int a;
     	scanf("%lld",&a);
     	int counter=0;
     	long long int w=a;
     	while(true)
     	{
     		stringstream ssd;
     		ssd<<w;
     		string str;
     		ssd>>str;
     		//cout<<str<<endl;
     		long long int sum=0;
     		for(int j=0;j<str.size();j++)
     		{
     			sum+=((str[j]-'0')*(str[j]-'0'));
     			//cout<<sum<<endl;
     		}
     		w=sum;
     		//cout<<w<<endl;
     		if(w==1) {
     			counter++;
     			break;
     		}
     		else if(w<=9)
     		{
     			break;
     		}
     	}
     	if(counter==0)
     	{
     		printf("Case #%d: %d is an Unhappy number.\n",i,a);
     	}
     	else
     	{
     		printf("Case #%d: %d is a Happy number.\n",i,a);
     	}
     }
	return 0;
}