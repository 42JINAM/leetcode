#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
  int majorityElement(vector<int> &nums) {
    map<int, int> element;
    int majorityNum = 0;
    int threshold = nums.size() / 2;
    for (int &num : nums) {
      element[num]++;
      if (element[num] > threshold) {
        majorityNum = num;
        break;
      }
    }
    return majorityNum;
  }
};

int main() {}
