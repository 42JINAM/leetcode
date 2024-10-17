#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
private:


public:
  const string fizz = "Fizz";
  const string buzz = "Buzz";
  const string fizzbuzz = "FizzBuzz";
  vector<string> fizzBuzz(int n) {
    vector<string> answer;

    for (int i = 1; i <= n; i++) {
      if (i % 3 == 0 && i % 5 == 0) {
        answer.push_back(fizzbuzz);
      } else if (i % 3 == 0) {
        answer.push_back(fizz);
      } else if (i % 5 == 0) {
        answer.push_back(buzz);
      } else {
        answer.push_back(to_string(i));
      }
    }
    return answer;
  }
};

void test(int i) {
  vector<string> answer = Solution().fizzBuzz(i);

  for_each(answer.begin(), answer.end(), [&](string &str){
    cout << str + " ";
  });
}
int main (){
  test(3);
  test(5);
  test(15);
}
