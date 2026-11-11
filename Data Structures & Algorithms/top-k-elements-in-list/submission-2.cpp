class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Hash map to store: element -> frequency
        unordered_map<int, int> mp;

        // Stores pairs as: (frequency, element)
        vector<pair<int, int>> ans;

        // Stores the final answer
        vector<int> ans1;

        // Count the frequency of each element
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        // Store each element along with its frequency
        // Pair format: (frequency, element)
        for (auto it : mp) {
            ans.push_back({it.second, it.first});
        }

        // Sort the pairs in ascending order of frequency
        sort(ans.begin(), ans.end());

        // Index from where the top k frequent elements begin
        int start = ans.size() - k;

        // Collect the last k elements (highest frequencies)
        for (int i = start; i < ans.size(); i++) {
            ans1.push_back(ans[i].second);
        }

        // Return the k most frequent elements
        return ans1;
    }
};
