class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& e, vector<double>& p, int s, int end) {
           vector<pair<int,double>>ad[n+1];
        for(int i=0;i<e.size();i++){
            ad[e[i][0]].push_back({e[i][1],p[i]});
            ad[e[i][1]].push_back({e[i][0],p[i]});
        }
        priority_queue<pair<double,int>>pq;
        pq.push({1.0,s});
        vector<double>pro(n+1,0.0);
        pro[s]=1.0;
        while(pq.size()){
            auto x = pq.top();
            pq.pop();
            double pb = x.first;
            int in = x.second;
            if(in==end)continue;
            for(auto k:ad[in]){
                double pp = pb * k.second;
                if(pro[k.first]<pp){
                    pro[k.first] = pp;
                    pq.push({pro[k.first],k.first});
                }
            }
        }
        return pro[end];
    }
};