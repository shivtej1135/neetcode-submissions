class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;

        int left = 0;
        int right = 0;
        int ans = 0;

        while(right < s.size()) {

            // Character is not present in current window
            if(mp.find(s[right]) == mp.end()) {
                mp.insert(s[right]);
                right++;

                ans = max(ans, right - left);
            }
            else {
                // Remove characters from the left
                // until the duplicate is removed
                mp.erase(s[left]);
                left++;
            }
        }

        return ans;
    }
};