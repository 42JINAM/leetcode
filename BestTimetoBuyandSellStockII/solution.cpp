#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
  int maxProfit(vector<int> &prices) {
    int profit = 0;

    for (int i = 1; i != prices.size(); i++) {
      if (prices[i] > prices[i - 1]) {
        profit += prices[i] - prices[i - 1];
      }
    }
    return profit;
  }
};

int main() {}
