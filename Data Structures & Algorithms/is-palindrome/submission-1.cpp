class Solution {
public:
    bool isPalindrome(string s) {
        int pointer1 = 0;
        int pointer2 = s.size() - 1;
        while(pointer1<pointer2){
            while(pointer1<pointer2 && !isalnum(s[pointer1])){
                pointer1++;
            }
            while(pointer1<pointer2 && !isalnum(s[pointer2])){
                pointer2--;
            }
            if(tolower(s[pointer1])!=tolower(s[pointer2])){
                return false;
            }
            pointer1++;
            pointer2--;
        }
        return true;
    }
};
