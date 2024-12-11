class Solution {
public:
    string reverseWords(string s) {
       stack<string> test;
       string temp;
       string res;

       for (char &c : s){
        if (c == ' ' || c == '\t'){
            if (temp.size() != 0) {
               test.push(temp);
               temp.clear(); 
            }
        } else {
            temp.push_back(c);
        }
       }
       if (!temp.empty()){
        test.push(temp);
       }
       while (!test.empty()){
        res += test.top();
        test.pop();
        if (!test.empty())
            res += " ";
       }
       return res;
    }
};