//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  long long atmostk (string& s, int k){
      vector<int>val(26, 0);
       int count=0;
       int i=0;
       int j=0;
       long long ans = 0;
       while(j<s.size()){
           if(val[s[j]-'a']==0){
               count++;
           }
           val[s[j]-'a']++;
           if(count <= k){
               ans+= j-i;
               j++;
           }
           else{
               while(count > k){
                   val[s[i]-'a']--;
                   if(val[s[i]-'a']==0){
                       count--;
                   }
                   i++;
               }
               if(count <= k){
                   ans+= j-i;
               }
               j++;
           }
       }
       return ans;
   }
   long long int substrCount (string s, int k) {
       long long ans = atmostk(s, k) - atmostk(s, k-1);
       return ans;	//code here.
    }
};


//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends