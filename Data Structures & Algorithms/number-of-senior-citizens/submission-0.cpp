class Solution {
public:
    int countSeniors(vector<string>& details) {
        int sum1=0;
        for(int i=0;i<details.size();i++){
            int sum=0;
            sum=details[i][11]-'0';
            sum=sum*10+details[i][12]-'0';
            if(sum>60){
                sum1++;
            }
        }
        return sum1;
    }
};