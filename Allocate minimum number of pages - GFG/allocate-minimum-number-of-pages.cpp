//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int func(int mid,int arr[],int N)
   {
       int count=1,sum=0;
       for(int i=0;i<N;i++)
       {
           if(sum+arr[i]>mid)
           {
               sum=arr[i];
               count++;
           }
           else
           sum+=arr[i];
       }
       return count;
   }
    int findPages(int arr[], int N, int M) 
    {
        //code here
         int i,low=0;
         if(M>N)
         return -1;
        for(i=0;i<N;i++)
        {
           low=max(arr[i],low);
        }
        int sum=0;
        for(i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        int high=sum,ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int n=func(mid,arr,N);
            if(n>M)
            low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends