//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int m, int n, string s1, string s2)
    {
        // your code here
       
        int dp[m+1][n+1];
        int i,j;
        for(i=0;i<m+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                  dp[i][j]=0;
            }
        }
        
         for(i=1;i<m+1;i++)
        {
            for(j=1;j<n+1;j++)
            {
              if(s1[i-1]==s2[j-1])
                dp[i][j]= 1+ dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
        // int t[x+1][y+1];
        
        // for(int i=0;i<x+1;i++)
        // for(int j=0;j<y+1;j++)
        // if(i==0 or j==0)
        // t[i][j]=0;
        
        // for(int i=1;i<x+1;i++)
        // {
        //     for(int j=1;j<y+1;j++)
        //     {
        //         if(s1[i-1]==s2[j-1])
        //         t[i][j]=1+t[i-1][j-1];
        //         else
        //         t[i][j]=max(t[i-1][j],t[i][j-1]);
        //     }
        // }
        // return t[x][y];

    }
};



//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends