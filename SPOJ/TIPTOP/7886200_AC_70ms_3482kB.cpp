#include<bits/stdc++.h>
using namespace std;
int main()
 {
   int x ;
   scanf("%d",&x);
   int caseNo = 1;
   for(int i=0;i<x;i++)
      {
      long long int a;
      scanf("%lld", &a);
      long long int b = sqrtl(a) ;
      if(b*b==a)
      {
       printf("Case %d: Yes\n",caseNo++);
      }
      else
      {
      	printf("Case %d: No\n", caseNo++);
      }
}
}