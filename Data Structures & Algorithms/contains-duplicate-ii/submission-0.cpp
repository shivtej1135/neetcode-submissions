class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(!mp.empty() && mp.find(nums[i])!=mp.end()){
                auto it = mp.find(nums[i]);
                j=it->second;
                 if(abs(i - j) <= k){
                    return true;
                 }
            }
            mp[nums[i]]=i;
           
        }
        return false;
    }
};