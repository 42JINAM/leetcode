#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // void rotate(vector<int> &nums, int k) {
  //   for (int i = 0; i != k; i++) {
  //     int &rotates = *nums.rbegin();
  //     nums.pop_back();
  //     nums.insert(nums.begin(), rotates);
  //   }
  // }
  // Write your solution here
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n;
    vector<int> temp(n);

    for (int i = 0; i != n; i++) {
      temp[(i + k) % n] = nums[i];
    }
    nums = temp;
  }
};

void println(const vector<int> &nums) {
  bool first(true);
  for (auto &num : nums) {
    std::cout << (first ? first = false, "" : ", ") << num;
  }
}

int main() {
  Solution solution;

  vector<int> test = {1, 2, 3, 4, 5};
  solution.rotate(test, 2);
  println(test);
}
