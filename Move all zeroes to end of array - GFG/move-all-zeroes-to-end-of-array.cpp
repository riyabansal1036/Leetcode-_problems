//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    vector<int>temp1,temp2;
	    int i;
	    for(int i=0;i<n;i++)
	     {
	         if(arr[i]!=0)
	          
	           temp2.push_back(arr[i]);
	     }
	   //  int m=temp.size();
	     for(i=0;i<temp2.size();i++)
	       arr[i]=temp2[i];
	       while(i<n){
	       arr[i]=0;
	       i++;
	       }
	}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends