class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;

        for(int i = 0 ; i < arr.size() ; i++) {
            int largest = -1;

            for(int j = i + 1 ; j < arr.size() ; j++) {
                largest = max(largest, arr[j]);
            }

            ans.push_back(largest);
        }

        return ans;
    }
};