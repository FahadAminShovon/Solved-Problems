#include <bits/stdc++.h>
using namespace std;

int main() {
	int counter=1;
	while(counter<=2000)
	{
		string a;
	    getline(cin,a);
		if(a=="#")
		{
			break;
		}
		else if(a=="HELLO")
		{
			printf("Case %d: ENGLISH\n",counter);
		}
		else if(a=="HOLA")
		{
		   printf("Case %d: SPANISH\n",counter);	
		}
		else if(a=="HALLO")
		{
			printf("Case %d: GERMAN\n",counter);
		}
		else if(a=="BONJOUR")
		{
		    printf("Case %d: FRENCH\n",counter);	
		}
		else if(a=="CIAO")
		{
			printf("Case %d: ITALIAN\n",counter);
		}
		else if(a=="ZDRAVSTVUJTE")
		{
			printf("Case %d: RUSSIAN\n",counter);
		}
		else
		{
			printf("Case %d: UNKNOWN\n",counter);
		}
		
		counter++;
	}
	return 0;
}