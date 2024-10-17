#include <iostream>
#include <ostream>
class Solution {
public:
  int numberOfSteps(int num) {
    int steps = 0;
    while (num) {
      if (num % 2 == 0) {
        num /= 2;
      } else {
        num--;
      }
      steps++;
    }
    return steps;
  }
};

void test(int i) { std::cout << Solution().numberOfSteps(i) << std::endl; }

int main(void) {
  test(14);
  test(8);
  test(123);
}
