#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ret;
        int acc = 0;

        for (auto &num : nums) {
            acc += num;
            ret.push_back(acc);
        }
        return ret;
    }
};
