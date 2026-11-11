class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum = 0;
        unordered_map<int,int>mp;
        int ans=0;
        mp[0] = 1;
        for(int i=0;i<nums.size();i++){
            prefixSum=prefixSum+nums[i];
            if(mp.find(prefixSum-k)!=mp.end()){
                ans=ans+mp[prefixSum-k];
            }
            mp[prefixSum]++;
        }
        return ans;
    }
};