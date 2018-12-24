#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,i,m,num;
    int counter ;
    while(scanf("%lli", &n) && n!=0)
    {
        m = 0;
        counter =0;
        num = abs(n);
        for(i = 2 ; i <= sqrt(num);i++)
        {
            while(n%i == 0)
            {
                if(m!=i)
                {
                    counter++;
                }
                m = i;
                n /= i;
            }
        }
        if(n != 1 && n != -1 && n!=num)
        {
            m = abs(n);
            counter++;
        }
        if(counter > 1)
        {
            printf("%lli\n", m);
        }
        else
        {
            printf("%d\n", -1);
        }
    }
    return 0;
}