#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
  int removeDuplicates(vector<int> &nums) {
    if (nums.size() == 0)
      return 0;
    vector<int>::iterator first = nums.begin();
    vector<int>::iterator second = nums.begin() + 1;

    for (; second != nums.end();) {
      if (*first == *second) {
        second = nums.erase(second);
      } else {
        first = second;
        second = first + 1;
      }
    }
    return nums.size();
  }
};

int main() {
  vector<int> test = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  Solution solution;

  cout << solution.removeDuplicates(test) << endl;
  for (auto num : test) {
    cout << num << " ";
  }
  cout << endl;
}
