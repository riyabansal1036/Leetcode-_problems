//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
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
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int m=str1.length();
	    int n=str2.length();
	    int ans=lcs(m,n,str1,str2);
	    return(m-ans)+(n-ans);
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends