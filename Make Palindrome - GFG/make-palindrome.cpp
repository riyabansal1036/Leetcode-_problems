//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        unordered_map<string,int>mp;
        int i;
        for(i=0;i<n;i++)
        {
            string temp=arr[i];
            reverse(temp.begin(),temp.end());
            mp[temp]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp[arr[i]]<1)
             return 0;
             mp[arr[i]]--;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends