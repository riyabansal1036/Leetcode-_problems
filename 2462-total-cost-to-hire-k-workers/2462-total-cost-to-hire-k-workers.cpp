class Solution {
public:
    long long totalCost(vector<int>& v, int k, int tc) { //tc- candidates
        int n=v.size();
        long long ans=0;
        int i=0, j=n-1;
        multiset<int> a1, b1;
        while(i<=j) {
            if(i==tc) break;   //if tc is reached then we can break
            a1.insert(v[i++]);
            if(i>j) break; //so that multiple occurence doesn't occur
            b1.insert(v[j--]); 
        }
        while(k--) {
            if(a1.empty()) {  //possible that all the smallest value are in a1 and it becomes empty at some point
                ans+=*b1.begin();  //like 1 2 3 4 5 and k=5, tc=1, so it will become empty as all the small values will get erase
                b1.erase(b1.begin());
                continue;
            }
            if(b1.empty()) {  // same logic as above
                ans+=*a1.begin(); 
                a1.erase(a1.begin());
                continue;
            }
            if(*a1.begin()<=*b1.begin()) { //for smaller value in both (using '=' to get smallest index i.e from a1(left)
                ans+=(*a1.begin());
                a1.erase(a1.begin());
                if(i<=j)
                a1.insert(v[i++]);
            }
            else{  //this is the only option to choose from end
                ans+=(*b1.begin());
                b1.erase(b1.begin());
                if(i<=j)
                b1.insert(v[j--]);
            }
        }
        return ans;
    }
};