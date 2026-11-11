class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i = 0;i<n;i++){
            pq.push({abs(x-arr[i]),arr[i]});
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            int curr = pq.top().second;
            pq.pop();
            ans.push_back(curr);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};