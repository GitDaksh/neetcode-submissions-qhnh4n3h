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
    int lengthOfLastWord(string s) {
        while (!s.empty() && s.back() == ' ') {
            s.pop_back();
        }

        int i = s.size() - 1;
        int x = 0;

        while(i >= 0 && s[i] != ' ') {
            x++;
            i--;
        }

        return x;
    }
};