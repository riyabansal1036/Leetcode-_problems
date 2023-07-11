//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int left=0,right=m-1,top=0,bottom= n-1;
 		int i;
 		vector<int>v;
 		while((left<=right) && (top<=bottom))
 		{
 		    for(i=left;i<=right;i++)
 		    {
 		        v.push_back(a[top][i]);
 		    }
 		    top++;
 		    for(i=top;i<=bottom;i++)
 		    {
 		        v.push_back(a[i][right]);
 		    }
 		    right--;
 		    if(top<=bottom){
 		    for(i=right;i>=left;i--)
 		    {
 		        v.push_back(a[bottom][i]);
 		    }
 		    bottom--;
 		    }
 		    if(left<=right){
 		    for(i=bottom;i>=top;i--)
 		    {
 		        v.push_back(a[i][left]);
 		    }
 		    left++;
 		    }
 		}
 		return v[k-1];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends