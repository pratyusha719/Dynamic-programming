#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int max=0;
    int dp[str1.length()+1][str2.length()+1];
    
    for(int i=0;i<str1.length()+1;i++)
    dp[i][0]=0;
    
    for(int i=0;i<str2.length()+1;i++)
    dp[0][i]=0;
    
    for(int i=1;i<str1.length()+1;i++)
    {
        for(int j=1;j<str2.length()+1;j++)
        {
            if(str1[i-1]==str2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            
            else
            dp[i][j]=0;
            
            if(dp[i][j]>max)
            max=dp[i][j];
        }
    }
    
   cout<<max;
}