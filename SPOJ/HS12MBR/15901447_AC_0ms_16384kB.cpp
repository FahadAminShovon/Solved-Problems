#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
using namespace std;

int rx,ry,lx,ly;




int main() {
//    freopen("input.txt","r",stdin);

    int n;
    sc("%d",&n);
    string ajaira;
    for(int i=0;i<n;i++){
        int mx=-2000;
        int my=-2000;
        int minx=2000;
        int miny=2000;

        int m ;
        sc("%d",&m);
        for(int j=0;j<m;j++){
        getline(cin,ajaira);
        string str;
        cin>>str;
        if(str=="p"){
            int x1,y1;
            cin>>x1>>y1;
            mx=(max(mx,x1));
            my=(max(my,y1));
            minx=(min(minx,x1));
            miny=(min(miny,y1));

            //cout<<str<<x1<<y1<<endl;
            //getline(cin,ajaira);
            continue;
        }
        else if(str=="c"){

            int x,y,r;
            cin>>x>>y>>r;
            //cout<<str<<x<<y<<r<<endl;
            int x1=x+r;
            int y1=y+r;
            int x2=x-r;
            int y2=y-r;

            mx=max(mx,x1);
            my=max(my,y1);
            minx=min(minx,x2);
            miny=min(miny,y2);

        }
        else if(str=="l"){
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
             //cout<<str<<x1<<y1<<x2<<y2<<endl;
             mx=max(mx,max(x1,x2));
             my=max(my,max(y1,y2));
             minx=min(minx,min(x1,x2));
             miny=min(miny,min(y1,y2));


        }

        }

        cout<<minx<<" "<<miny<<" "<<mx<<" "<<my<<endl;

    }



	return 0;
}
