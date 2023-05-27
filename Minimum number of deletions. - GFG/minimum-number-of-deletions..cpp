//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends

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
int minDeletions(string str, int n) { 
    //complete the function here 
    string str1= str;
    reverse(str1.begin(),str1.end());
    int ans=lcs(n,n,str,str1);
    return n-ans;
} 