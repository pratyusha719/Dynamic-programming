//longest common subsequence problem

#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    
    int arr[str1.length()+1][str2.length()+1],m=0;
    
    for(int i=0;i<str1.length()+1;i++)
    {
        for(int j=0;j<str2.length()+1;j++)
        {
            if(i==0 ||j==0)
            arr[i][j]=0;
            
            else if(str1[i-1]==str2[j-1])
            arr[i][j]=arr[i-1][j-1]+1;
            
            else
            arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            
            
        }
       
    }
    int c=arr[str1.length()][str2.length()];
    
    cout<<"deletion count= "<<str1.length()-c<<endl;;
    cout<<"insertion count= "<<str2.length()-c;
}