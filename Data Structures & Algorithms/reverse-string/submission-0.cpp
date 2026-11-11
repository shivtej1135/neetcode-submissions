class Solution {
public:
    void reverseString(vector<char>& s) {
        int pointer1=0;
        int pointer2=s.size()-1;
        while(pointer1<=pointer2){
            swap(s[pointer1],s[pointer2]);
            pointer1++;
            pointer2--;
        }
    }
};