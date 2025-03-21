#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int i = 0;
    if (nums.size() == 0)
      return 0;
    for (int j = 0; j != nums.size(); j++) {
      if (nums[i] != nums[j]) {
        i++;
        nums[i] = nums[j];
      }
    }
    return (i + 1);
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
