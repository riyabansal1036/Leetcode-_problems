//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int func(int mid, vector<int>&piles)
  {
      int sum=0;
      for(int i=0;i<piles.size();i++)
      {
          int x=piles[i]/mid;
          int y=piles[i]%mid;
          if(y!=0)
           x++;
           sum+=x;
      }
      return sum;
  }
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int low=1,ans=-1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            int time=func(mid,piles);
            if(time<=H)
            {
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends