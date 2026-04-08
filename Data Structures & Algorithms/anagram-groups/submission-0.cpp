class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string s : strs) {
            string key = s;              // copy original word
            sort(key.begin(), key.end()); // sort it

            mp[key].push_back(s);        // group it
        }

        vector<vector<string>> ans;

        for(auto it : mp) {
            ans.push_back(it.second);    // take grouped words
        }

        return ans;
    }
};