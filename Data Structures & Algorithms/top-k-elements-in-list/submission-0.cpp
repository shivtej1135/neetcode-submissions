class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>ans;
        vector<int>ans1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            ans.push_back({it.second,it.first});
        }
        sort(ans.begin(), ans.end(), greater<pair<int,int>>());
        for(int i=0;i<k;i++){
            ans1.push_back(ans[i].second);
        }
        return ans1;
    }
};
