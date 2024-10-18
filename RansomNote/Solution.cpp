#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    map<char, int> magazineMap;

    for (auto &cha : magazine) {
      magazineMap[cha]++;
    }
    for (auto &cha : ransomNote) {
      if (magazineMap[cha]) {
        magazineMap[cha]--;
      } else {
        return false;
      }
    }
    return true;
  }
};

int main() {
  cout << Solution().canConstruct("aa", "ab") << endl;
  cout << Solution().canConstruct("aa", "aab") << endl;
}
