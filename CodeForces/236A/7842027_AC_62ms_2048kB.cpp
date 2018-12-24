#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[105];
    cin >> s;
    int x = strlen(s);
    sort(s, s+x);
    int counter =0;
    for(int i=0; i<x; i++)
    {
        if(s[i] != s[i+1])
        {
            counter++;
        }
    }
    if(counter%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
}
