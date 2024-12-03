#include <iostream>
#include <map>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
  string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1)
      return "";
    int gcdLen = gcd(str1.size(), str2.size());
    return (str1.substr(0, gcdLen));
  }
};

int main() {}
