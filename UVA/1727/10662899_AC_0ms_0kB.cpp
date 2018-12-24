#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef unsigned long long ull;
int main(){
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    string mnth[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int n_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string a,b,ajaira;
    
    int num,ans=0;
    sc("%d",&num);
    getline(cin,ajaira);
    while(num--){
        cin>>a>>b;
        int x = find(day,day+7,b)-day;
		int y = find(mnth,mnth+12,a)-mnth;
		ans=0;
		for(int i=0;i<n_day[y];i++){
            if((x+i)%7==5 || (x+i)%7==6) ans++;
		}
		printf("%d\n",ans);
    }
	return 0;
}