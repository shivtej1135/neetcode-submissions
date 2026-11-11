class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int sum=0;
        while(s[i]==' '){
            i--;
        }
        while(i>=0 && s[i]!=' '){
            sum++;
            i--;
        }
        return sum;
    }
};