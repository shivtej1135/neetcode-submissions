class TimeMap {
public:
    unordered_map<string, vector<pair<string, int>>> mp;

    TimeMap() {

    }

    void set(string key, string value, int timestamp) {
        mp[key].push_back({value, timestamp});
    }

    string get(string key, int timestamp) {
        if (mp.find(key) == mp.end()) {
            return "";
        }

        string ans = "";

        for (auto [val, time] : mp[key]) {
            if (time <= timestamp) {
                ans = val;
            }
            else {
                break;
            }
        }

        return ans;
    }
};