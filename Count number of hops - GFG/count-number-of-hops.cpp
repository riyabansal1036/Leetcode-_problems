//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        long long mod= 1e9+7;
        long long prev2=1, prev1=2, prev=4;
        if(n<=2) return n;
        if(n==3) return 4;
        for(int i=4;i<=n;i++){
            long long curr= ((prev2 +prev1)%mod + prev)%mod;
            prev2=prev1;
            prev1=prev;
            prev= curr;
        }
        return prev;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends