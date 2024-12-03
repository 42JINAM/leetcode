#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
  int maxProfit(vector<int> &prices) {
    int n = prices.size();
    auto it = prices.begin();
    int profitMax = 0;

    while (it != prices.end()) {
      int profit = 0;
      int maxPrice = *std::max_element(it + 1, prices.end());
      if (*it < maxPrice) {
        profit = maxPrice - *it;
        if (profitMax < profit)
          profitMax = profit;
      }
      it++;
    }
    return profitMax;
  }
};

int main() {}
