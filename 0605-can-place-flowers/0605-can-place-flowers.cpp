class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int prev = 0;
        int next = 0;
        int current;
        for (int i = 0; i < flowerbed.size(); i++) {
            current = flowerbed[i];
            if (i == flowerbed.size() - 1) {
                next = 0;
            } else {
                next = flowerbed[i + 1];
            }
            if (current == 0 && prev == 0 && next == 0) {
                n --;
                prev = 1;
            } else {
                prev = current;
            }
        }
        return (n <= 0);
    }
};