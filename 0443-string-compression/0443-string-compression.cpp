class Solution {
public:
    int compress(vector<char>& chars) {
        int res = 0;
        for (int i = 0; i != chars.size();){
            int size = 1;
            while (i + size  < chars.size() && chars[i + size] == chars[i]){
                size ++;
            }
            chars[res++] = chars[i];
            if (size > 1) {
                for (char &c : to_string(size)) {
                    chars[res++] = c;
                }
            }
            i += size;
        }
        return res;
    }
};