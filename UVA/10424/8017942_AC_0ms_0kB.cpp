#include <bits/stdc++.h>
using namespace std;

int summer(int x)
{
	
	int sum=0;
	while(x>0)
	{
		sum+=x%10;
		x=x/10;
		if(x==0&&sum>=10)
		{
			x=sum;
			sum=0;
		}
	}
	return sum;
}

int main() {
	string a,b;
	while(getline(cin,a))
	{
		getline(cin,b);
		int sum1=0,sum2=0;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]>='a'&&a[i]<='z')
			{
				sum1=sum1+a[i]-'a'+1;
			}
			else if(a[i]>='A'&&a[i]<='Z')
			{
				sum1=sum1+a[i]-'A'+1;
			}
		}
		
		for(int i=0;i<b.size();i++)
		{
			if(b[i]>='a'&&b[i]<='z')
			{
				sum2=sum2+b[i]-'a'+1;
			}
			else if(b[i]>='A'&&b[i]<='Z')
			{
				sum2=sum2+b[i]-'A'+1;
			}
		}
		
		//cout<<sum1<<endl;
		int x=summer(sum1);
		//cout<<x<<endl;
		int y=summer(sum2);
		//cout<<sum2<<endl;
		//cout<<y<<endl;
		int temp;
		if(y>x)
		{
			temp=y;
			y=x;
			x=temp;
		}
		//cout<<x<<endl;
		//cout<<y<<endl;
		if(sum1==0&&sum2==0)
		{
			cout<<endl;
		}
		else{
			double z=(y*100.0/x);
			printf("%.2lf %\n",z);
		}
	}
	return 0;
}