class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;

        // Insert all elements into the set
        for(int i = 0; i < nums.size(); i++){
            mp.insert(nums[i]);
        }

        int ans = 0;

        // Check every number
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];

            // x is the start of a sequence if x-1 doesn't exist
            if(mp.find(x - 1) == mp.end()){
                int sum = 1;

                // Keep checking for consecutive elements
                while(mp.find(x + 1) != mp.end()){
                    x++;
                    sum++;
                }

                // Update the longest sequence
                ans = max(ans, sum);
            }
        }

        return ans;
    }
};
