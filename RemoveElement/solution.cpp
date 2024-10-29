#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
  int removeElement(vector<int> &nums, int val) {
    auto it = find(nums.begin(), nums.end(), val);
    while (it != nums.end()) {
      it = find(nums.erase(it), nums.end(), val);
    }
    return nums.size();
  }
};

void test(vector<int> nums, int num) {
  Solution solution;
  solution.removeElement(nums, 2);
}

int main() { test({0, 1, 2, 2, 3, 0, 4, 2}, 2); }
