#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
	    double y;
	    scanf("%lf",&y);
	    double area=3.141592654*y*y/25;
	    double green=(y*y*6/10)-area;
	    printf("%.2lf %.2lf\n",area,green);
	}
	return 0;
}