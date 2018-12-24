#include<stdio.h>
int binary_decimal(int n);
int main()
{
    int a,b,c,d;
    int e,f,g,h;
    int i,j,k,l;
    int n;
    int m;
    scanf("%d",&m);
    for(n=0; n<m; n++)
    {
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
         e = binary_decimal(a);
         f = binary_decimal(b);
         g = binary_decimal(c);
         h = binary_decimal(d);
        scanf("%d. %d. %d. %d", &i, &j, &k, &l);

        if(e==i && f==j && g==k && h==l)
        {
            printf("Case %d: Yes\n",n+1);
        }
        else
            printf("Case %d: No\n",n+1);

    }
}

int binary_decimal(int n)
{
    int rem, i=1, binary=0;
    while (n!=0)
    {
        rem=n%2;
        n = n/2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}
