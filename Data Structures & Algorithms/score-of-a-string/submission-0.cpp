class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int char1;
        int char2;
         for(int i=0;i<s.length()-1;i++){
            char1=int(s[i]);
            char2=int(s[i+1]);
            sum=sum+abs(char2-char1);
         }
         return sum;
    }
};