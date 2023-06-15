//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longestPalin (string s) {
        // code here
        int i,x,z,j;
        int n=s.length();
        int maxlength=0;
        string str;
            //     int l=i;
            //   int r=i;
        //     //     if(l>=0&& r<=n
        // if(n%2!=0)
        // {
            
            for(i=0;i<n;i++)
            {
                int l=i;
               int r=i;
                while(l>=0&& r<=n&&s[l]==s[r])
             {
                
                 int currentlength=r-l+1;
                 if(currentlength>maxlength)
                 {
                     maxlength=currentlength;
                      x=l;
                      z=r;
                 }
                 l--;
                 r++;
              }
            
        //     for(j=0;j<maxlength;j++)
        //     for(i=x;i<=z;i++)
        //       str[j]= s[i];
        //     //  return str;
        // // }
        // return str;
        // // if(n%2==0)
        // // {
        //     for(i=0;i<n;i++)
        //     {
                 l=i;
                r=i+1;
                while(l>=0&& r<=n&&s[l]==s[r])
             {
                
                 int currentlength=r-l+1;
                 if(currentlength>maxlength)
                 {
                     maxlength=currentlength;
                      x=l;
                      z=r;
                 }
                 l--;
                 r++;
              }
            }
            
            // for(j=0;j<maxlength;j++)
             for(i=x;i<=z;i++)
             str=str+s[i];
    
        
        return str;
     }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends