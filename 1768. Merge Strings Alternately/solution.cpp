#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    string res;
    string::iterator it = word2.begin();
    bool word2_end = false;
    for (char &c : word1) {
      res += c;
      if (it != word2.end())
        res += *it++;
      else
        word2_end = true;
    }
    if (word2_end == false) {
      for (; it != word2.end(); it++) {
        res += *it;
      }
    }
    return res;
  }
  // Write your solution here
};

int main() {}
