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
    int scoreOfString(string s) {
        int sum = 0;

        for(int i = 0 ; i < s.size() - 1 ; i++) {
            sum += abs(int(s[i] - s[i + 1]));
        }

        return sum;
    }
};