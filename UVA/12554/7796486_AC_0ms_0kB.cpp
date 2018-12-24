#include <bits/stdc++.h>
using namespace std;

int main() {
	string str[]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday",
	"to","Rujia","Happy","birthday","to","you"};
    int people;
    cin>>people;
    string name[people];
    for(int i=0;i<people;i++)
    {
    	cin>>name[i];
    }
   
   int n=16;
   //int counter=1;
   if(people>16)
   {
   	int c=people/16;
   	n=(n*(c+1));
   }
    
    for(int i=0;i<n;i++)
    {
    	cout<<name[i%people]<<": "<<str[i%16];
    	cout<<endl;
    }

	return 0;
	
}