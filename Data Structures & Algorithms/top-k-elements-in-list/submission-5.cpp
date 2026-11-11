class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            ans.push_back({it.second,it.first});
        }
        sort(ans.begin(),ans.end());
        int n = ans.size()-1;
        vector<int> ans1;
        while(k>0){
            ans1.push_back(ans[n].second);
            n--;
            k--;
        }
        return ans1;
    }
};
