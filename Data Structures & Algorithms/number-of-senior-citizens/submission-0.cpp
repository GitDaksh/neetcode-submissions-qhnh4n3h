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
    int countSeniors(vector<string>& details) {
        int x = 0;
        for(int i = 0 ; i < details.size() ; i++) {
            int age = ((details[i][11]) - '0') * 10 + (details[i][12] - '0');

            if(age > 60) {
                x++;
            }
        }

        return x;
    }
};