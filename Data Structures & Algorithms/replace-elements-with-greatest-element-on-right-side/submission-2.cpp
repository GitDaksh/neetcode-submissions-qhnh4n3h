#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <climits>
#include <cmath>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size());

        int maxRight = -1;

        for(int i = arr.size() - 1 ; i >= 0 ; i--) {
            ans[i] = maxRight;
            maxRight = max(maxRight, arr[i]);
        }

        return ans;
    }
};