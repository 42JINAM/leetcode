#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
  int maximumWealth(vector<vector<int>> &accounts) {
    int moneyAccumulator;
    int maxWealth = 0;

    for (auto &account : accounts) {
      moneyAccumulator = 0;
      for (auto &money : account) {
        moneyAccumulator += money;
      }
      maxWealth = max(maxWealth, moneyAccumulator);
    }
    return maxWealth;
  }

private:
};

void test(vector<vector<int>> accounts) {
  cout << Solution().maximumWealth(accounts) << endl;
}

int main(void) {
  test({{1, 2, 3}, {3, 2, 1}});
  test({{1, 5}, {7, 3}, {3, 5}});
  return 0;
}
