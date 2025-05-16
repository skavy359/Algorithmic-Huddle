class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candles, int extraCandies) {
        vector<bool> result(candles.size());
        int largest = 0;
        for (int i = 0; i < candles.size(); i++) {
            if (candles[i] >= largest) {
                largest = candles[i];
            }
        }
        for (int i = 0; i < candles.size(); i++) {
            if ((candles[i] + extraCandies) >= largest) {
                result[i] = true;
            } else {
                result[i] = false;
            }
        }
        return result;
    }
};
