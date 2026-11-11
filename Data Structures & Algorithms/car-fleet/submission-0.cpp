class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        for(int i = 0;i<position.size();i++){
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.begin(),cars.end());
        int fleet = 1;
        stack<float> st;
        for(int i = cars.size()-1;i>=0;i--){
            float time = (float)(target - cars[i].first) / cars[i].second;
            if(!st.empty() && time<=st.top()){
                continue;
            }
            if(st.empty()){
                st.push(time);
                continue;
            }
            if(!st.empty() && time>st.top()){
                st.pop();
                st.push(time);
                fleet++;
            }
        }
        return fleet;
        
    }
};