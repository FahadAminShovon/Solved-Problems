#include <bits/stdc++.h>
using namespace std;

int main() {
	int times;
	scanf("%d",&times);
	if(times>=1)
    {
        if(times%2==0)
        {
            printf("Bob\n");
        }
        else{
            printf("Alice\n");
        }
    }
	return 0;
}
