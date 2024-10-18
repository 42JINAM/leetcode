#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    int position;
    for (char &cha : ransomNote) {
      position = magazine.find(cha);
      if (position == string::npos)
        return false;
      else {
        magazine.erase(position, 1);
      }
    }
    return true;
  }
};

int main() {
  cout << Solution().canConstruct("aa", "ab") << endl;
  cout << Solution().canConstruct("aa", "aab") << endl;
}
