class Solution {
public:
    int reverse(int x) {
        long long number = 0;
        
        while (x != 0) {
            number = number * 10 + (x % 10);
            x /= 10;
        } 
        
        // Final check for 32-bit integer limits
        if (number > INT_MAX || number < INT_MIN) {
            return 0;
        }
        
        return number;
    }
};
