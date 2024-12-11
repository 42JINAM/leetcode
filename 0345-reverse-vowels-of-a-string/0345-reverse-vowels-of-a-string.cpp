class Solution {
public:
    const char *vowels = "aeiouAEIOU";
    string reverseVowels(string s) {
      vector<int> s_vowels;
      string res;
      for (char &c: s){
        if (strchr(vowels, c)){
          s_vowels.push_back(c);
        }
      }
      int i = s_vowels.size() - 1;
      for (char &c: s){
        if (strchr(vowels, c)){
            res.push_back(s_vowels[i--]);
        } else {
            res.push_back(c);
        }
      }
      return res;
    }
};