class Solution {
public:
    int characterReplacement(string s, int k) {
        int right = 0;
        int left = 0;
        unordered_map<char, int> mp;
        int ans = 0;
        int maxFreq = 0;

        while (right < s.length()) {
            // Add current character to the window
            mp[s[right]]++;

            // Store the maximum frequency in the current window
            maxFreq = max(maxFreq, mp[s[right]]);

            right++;

            // If replacements needed are more than k, shrink the window
            while ((right - left) - maxFreq > k) {
                mp[s[left]]--;
                left++;
            }

            // Update the maximum valid window length
            ans = max(ans, right - left);
        }

        return ans;
    }
};
