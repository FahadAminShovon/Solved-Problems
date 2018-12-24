#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        string str;
        cin>>str;
        int a= sqrt(str.size());
        char w[a][a];
        int b=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
              w[i][j]=str[b];
              b++;  
            }
        }
        
        for(int i=a-1;i>=0;i--){
            for(int j=0;j<a;j++){
              cout<<w[j][i];
              b++;  
            }
        }
        
        cout<<endl;
        
    }
    return 0;
}
