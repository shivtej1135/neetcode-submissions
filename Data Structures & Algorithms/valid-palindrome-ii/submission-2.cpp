class Solution {
public:
    bool validPalindrome(string s) {
        int right = s.length() - 1;
        int left = 0;

        while (left < right && s[left] == s[right]) {
            left++;
            right--;
        }

        if (left >= right) {
            return true;
        }

        bool correct1 = true;
        int left1 = left + 1;
        int right1 = right;

        while (left1 < right1) {
            if (s[left1] != s[right1]) {
                correct1 = false;
                break;
            }
            left1++;
            right1--;
        }

        bool correct2 = true;
        int left2 = left;
        int right2 = right - 1;

        while (left2 < right2) {
            if (s[left2] != s[right2]) {
                correct2 = false;
                break;
            }
            left2++;
            right2--;
        }

        return correct1 || correct2;
    }
};