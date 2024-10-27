#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    for (int &num : nums2) {
      nums1[m++] = num;
    }
    sort(nums1.begin(), nums1.end());
  }
};

void test(vector<int> nums1, vector<int> nums2) {
  Solution solution;
  solution.merge(nums1, nums1.size(), nums2, nums2.size());
}
int main() { test({1, 2, 3, 0, 0, 0}, {2, 5, 6}); }
