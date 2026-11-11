class MinStack {
public:
        stack<pair<int,int>>st;
        int minVal;
    MinStack() {
    
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else{
            int minVal=min(val,st.top().second);
            st.push({val,minVal});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        if(!st.empty()){
        return st.top().second;
        }
    }
};
