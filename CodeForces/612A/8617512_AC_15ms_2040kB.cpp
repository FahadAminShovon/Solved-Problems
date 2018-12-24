#include <iostream>
using namespace std;

int main() {
	int n,p,q,flag=0,pm,qm;
	string str;
	scanf("%d %d %d",&n,&p,&q);
	//cout<<p<<" "<<q<<endl;
	getline(cin,str);
	getline(cin,str);
	//cout<<str<<endl;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if((p*i+q*j)==n){
				pm=i;
				qm=j;
				flag++;
			//	cout<<flag<<endl;
				break;
			}
		}
	}
	if(flag!=0){
		cout<<pm+qm<<endl;
		int w=0;
		for(int i=0;i<pm;i++){
			for(int j=0;j<p;j++){
				cout<<str[w];
				w++;
			}
			cout<<endl;
		}
		for(int i=0;i<qm;i++){
			for(int j=0;j<q;j++){
				cout<<str[w];
				w++;
			}
			cout<<endl;
		}
	}
	else{
		cout<<-1<<endl;
	}
	
	return 0;
}