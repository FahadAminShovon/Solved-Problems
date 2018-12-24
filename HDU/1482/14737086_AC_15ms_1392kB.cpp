#include <bits/stdc++.h>  
#include <string>  
#include <fstream>  
#include <memory.h>  
using namespace std;  
int main(){  
    int exp[12][3];  
    int result[3];  
    int n,i,j;  
    string s1,s2,s3;  
    cin>>n;  
    while(n--){  
        memset(exp,0,sizeof(exp));  
        memset(result,0,sizeof(result));  
    //下面开始三次试验，模拟出每次的结果  
        for (i=0;i<3;i++)  
        {  
            cin>>s1>>s2>>s3;  
            for (j=0;j<s1.size();j++)  
            {  
                exp[s1[j]-'A'][i]=1;//表明此币在左边  
                exp[s2[j]-'A'][i]=-1;//表明此币在右边  
            }  
            if (s3 == "even")  
            {  
                result[i] = 0;//表示此时重币应该不在天平上  
            }  
            else if (s3 == "down")  
            {  
                result[i] = -1;//表示此时重币应该在右边出现才对  
            }  
            else result[i] = 1;  
        }  
          
        for (j=0;j<12;j++)  
        {  
                if (exp[j][0] == result[0] && exp[j][1] == result[1] && exp[j][2] == result[2])  
                {  
                    cout<<char('A'+j)<<" is the counterfeit coin and it is heavy."<<endl;  
                    break;  
                }   
                else if(exp[j][0] == -result[0] && exp[j][1] == -result[1] && exp[j][2] == -result[2])  
                {  
                    cout<<char('A'+j)<<" is the counterfeit coin and it is light."<<endl;  
                    break;  
                }   
        }  
    }  
    return 0;  
}  