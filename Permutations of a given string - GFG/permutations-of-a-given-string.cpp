//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		     vector<string> v;
		    if(S.length()==1){v.push_back(S); return v;}
		    string s,sa;
		    
		    for(int i=1;i<S.length();i++) sa.push_back(S[i]);
		   
		    for(int i=0;i<S.length();i++){
		        s=sa;
		        if(i>0)
		        s[i-1]=S[0];
		        
		       vector<string> a=find_permutation(s);
		       for(int j=0;j<a.size();j++) {
		           v.push_back(S[i]+a[j]);}
		    }
		    
		    sort(v.begin(),v.end());
		    vector<string> ans;
		    for(int i=0;i<v.size();i++){
		        ans.push_back(v[i]);
		        int j=i;
		        while(i<v.size() && v[i]==v[j]) i++;
		        i--;
		    }
		    
		    return ans; 
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends