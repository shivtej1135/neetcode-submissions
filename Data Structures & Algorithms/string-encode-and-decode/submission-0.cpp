class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(int i=0;i<strs.size();i++){
            encoded = encoded + to_string(strs[i].size())+'#'+strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int i = 0;
        
        vector<string>ans;
        while(i<s.size()){
            string str = "";
        while(s[i]!='#'){
            str = str+s[i];
            i++;
        }
        i=i+1;
        int len = stoi(str);
        string curr="";
        
        for(int j=i;j<i+len;j++){
            curr = curr+s[j];
        }
        i = i + len;
       
        ans.push_back(curr);
        }
        return ans;

    }
};
