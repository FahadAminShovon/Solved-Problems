#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
using namespace std;


map<int,vector<int> >mp;
int idx=0;
stack<int>s;

void func1(){
    int b;
    sc("%d",&b);
    //cout<<b<<" "<<index<<endl;
    s.push(b);
    mp[b].pb(idx);
    idx++;
    //cout<<b<<" "<<index<<endl;
}

void func2(){
    if(s.empty()){
            pf("invalid\n");
            return ;
    }
    int num=s.top();
    mp[num].pop_back();
    s.pop();
    idx--;
}

void func3(){
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);
    //cout<<a<<" "<<b<<" "<<c<<endl;

    //cout<<a<<"->>"<<mp[a].size()<<endl;
    b--;
    c--;

    int index1=lower_bound(mp[a].begin(),mp[a].end(),b)-mp[a].begin();
    int index2=upper_bound(mp[a].begin(),mp[a].end(),c)-mp[a].begin();
    int ans = index2-index1;
    pf("%d\n",ans);
}

int main() {
    //freopen("input.txt","r",stdin);

    int n;
    sc("%d",&n);

    //cout<<n<<endl;

    for(int i=0;i<n;i++){
        int m;
        sc("%d",&m);

        if(m==0)func2();
        if(m==1)func1();
        if(m==2)func3();

    }
	return 0;
}
