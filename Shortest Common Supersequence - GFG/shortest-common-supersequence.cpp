//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
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
       

    }
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        int ans=lcs(m,n,X,Y);
        return m+n-ans;
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends