//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    ll oneend=1,zeroend=1,sum=oneend+zeroend;
	    if(n==1)
	    return sum;
	    int i=2;
	    while(i<=n)
	    {
	        oneend=zeroend%(1000000007);
	        zeroend=sum%(1000000007);
	        sum=oneend+zeroend%(1000000007);
	        i++;
	    }
	    return sum%(1000000007);
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends