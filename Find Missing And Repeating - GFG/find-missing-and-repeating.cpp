//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int>v;
        int i;
        for(i=0;i<n;i++)
        {
            int x=abs(arr[i])-1;
            if(arr[x]<0)
            {
                v.push_back(x+1);
            }
            else
            {
                arr[x]=(arr[x]*-1);
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                v.push_back(i+1);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends