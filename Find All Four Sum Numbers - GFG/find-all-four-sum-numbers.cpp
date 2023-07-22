//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &a, int k) {
        // Your code goes here
           vector<vector<int>>ans;
          int n=a.size();
        set<vector<int>>s;
        sort(a.begin(),a.end());
        int i=0,j;
        for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++){
        int low=j+1;
        int high=n-1;
        while(low<high)
        {
            if(a[low]+a[high]+a[i]+a[j]==k)
             {
                //  vector<int>temp;
                        s.insert({a[i],a[j], a[low], a[high]});
                          low++;
                          high--;
             }
            else if(a[low]+a[high]+a[i]+a[j]>k)
             high--;
             else
             low++;
            
        }
        }
       
    }
     for(auto it : s){
            ans.push_back(it);
        }
    return ans;
    
           
    
    
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends