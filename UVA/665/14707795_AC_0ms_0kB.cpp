#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define fread freopen("input.txt","r",stdin);

using namespace std;

vector<int> v[101];
set<int>s;
set<int>nums;
void clean(){
    s.clear();
    for(int i=0;i<101;i++)
    v[i].clear();
    nums.clear();
}

void input(int n){
    int x;
    sc("%d",&x);
    for(int i=0;i<x*2;i++){
        int w;
        sc("%d",&w);
        v[n].pb(w);
        nums.erase(w);
    }
}

int main()
{
    //fread;
    int m;
    sc("%d",&m);
    bool flag = true;
    for(int i=0;i<m;i++){
        clean();
        int n,k;
        sc("%d%d",&n,&k);
        for(int i=1;i<=n;i++)
            nums.insert(i);

        for(int j=0;j<k;j++){
            input(j);
            string str;
            cin>>str;

            if(str=="="){
                int sz=v[j].size();
                for(int k=0;k<sz;k++){
                    s.insert(v[j][k]);
                }
                v[j].clear();
            }
        }

        set<int>ans;
        set<int>::iterator it;
        int check=0;
        int test=0;
        for(int j=0;j<k;j++){
            int sz = v[j].size();
            if(sz>0){
                for(int k=0;k<sz;k++){
                    int r=v[j][k];
                    //cout<<r<<" ";
                    if(!s.count(r)||r>n){
                        ans.insert(r);
                    }
                }
               // cout<<endl;
            }
        }
        if(flag==false)cout<<endl;
        flag=false;
        int ss = ans.size();



        if(ss==1){
        it=ans.begin();
        int result = *it;
        cout<<result<<endl;
        }
        else if(nums.size()==1&&ss==0){
        it=nums.begin();
        int result = *it;
        cout<<result<<endl;
        }
        else cout<<0<<endl;




    }

    return 0;
}
