//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  long long func(int mid,int arr[],int N)
   {
       long long count=1,sum=0;
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
    long long minTime(int arr[], int N, int K)
    {
        // code here
        // return minimum time
         
         int i,low=0;
        for(i=0;i<N;i++)
        {
           low=max(arr[i],low);
        }
        long long sum=0;
        for(i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        long long high=sum,ans=-1;
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

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends