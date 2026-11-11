class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]!="+" &&  operations[i]!="D" && operations[i]!="C"){
                st.push(stoi(operations[i]));
            }
            if(operations[i]=="+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                int z = x+y;
                st.push(x);
                st.push(z);
            }
            if(operations[i]=="D"){
                int x = st.top();
                int y = 2*x;
                st.push(y);
            }
            if(operations[i]=="C"){
                st.pop();
            }
        }
        int sum = 0;
    while(!st.empty()){
        sum = sum + st.top();
        st.pop();
    }
    return sum;
    }
};