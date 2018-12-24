#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    getchar();
    string e,r;
    for (int i=0; i<t; i++) {
        getline(cin,e);
        int sz=e.size();
        
        if(e=="78"||e=="4"||e=="78")cout<<"+"<<endl;
        else if(e[sz-1]=='5'&&e[sz-2]=='3')cout<<"-"<<endl;
        else if(e[0]=='9'&&e[sz-1]=='4')cout<<"*"<<endl;
        else cout<<"?"<<endl;
 
    }
    return 0;
}