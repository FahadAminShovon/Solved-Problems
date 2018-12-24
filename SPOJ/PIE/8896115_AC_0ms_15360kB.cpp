        #include <bits/stdc++.h>

        using namespace std;

        const int MX=1e4+5;
        const double pi = 2*acos(0.0);
        const double eps = 1e-5;
        int n,f;
        double pie[MX];

        bool func(double val){
            int cnt =0;
            for(int i=0;i<n;i++){
                cnt+=(pie[i]/val);
            }
            return(cnt>=f);
        }

        int main()
        {
            int t;
            scanf("%d",&t);
            for(int i=1;i<=t;i++){
            scanf("%d%d",&n,&f);
            f++;
            for(int j=0;j<n;j++){
                scanf("%lf",&pie[j]);
                pie[j]=pi*pie[j]*pie[j];
            }

            sort(pie,pie+n);
            double lo=0,hi=pie[n-1],mid;
            while(hi-lo>eps){
                mid=(lo+hi)/2;
                if(func(mid))lo=mid;
                else hi=mid;
            }
            printf("%.4f\n",(hi+lo)/2);
            }
            return 0;
        }
