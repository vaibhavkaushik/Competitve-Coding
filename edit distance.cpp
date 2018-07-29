#include <bits/stdc++.h>
using namespace std;

int solve(string s1,string s2,int size1,int size2,int dp[2000][2000])
{
    if(size1==0)
               { 
     return size2;
               }
               
    if(size2==0)
    {
     return size1;
    }
    
    if(dp[size1][size2] !=INT_MAX)
    { return dp[size1][size2];}
    
    int option1=INT_MAX,option2=INT_MAX,option3=INT_MAX;
    if(s1[0]!=s2[0])
    {
        
         
         option1 = 1 + solve(s1.substr(1),s2.substr(1),size1-1,size2-1,dp);
         option2 = 1 + solve(s1.substr(1),s2,size1-1,size2,dp);
         option3 = 1 + solve(s1,s2.substr(1),size1,size2-1,dp);
    }
    else
    {    
        return solve(s1.substr(1),s2.substr(1),size1-1,size2-1,dp); 
        
    }
    
    dp[size1][size2] = min(option1,min(option2,option3));
    
    return dp[size1][size2];

    
    
}

int main() 
{
    
    
    
    int t;
    cin>>t;
    while(t--)
    {
        
    int dp[2000][2000];
        
    string s1,s2;
    cin>>s1>>s2;

    int size1 = s1.size();
    int size2 = s2.size();
        
    for(int i=0;i<2000;i++)
    { for(int j=0;j<2000;j++)
      {
         dp[i][j] = INT_MAX;    
      }
    }
        
    cout<<solve(s1,s2,s1.size(),s2.size(),dp)<<endl;
    }


    return 0;
}
