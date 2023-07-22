//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
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
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int i,low=0;
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
            if(n>K)
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
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends