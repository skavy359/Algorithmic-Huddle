class Solution {
    public:
        double separateSquares(vector<vector<int>>& squares) {
            double total = 0;
            double minY = 1e9, maxY = -1e9;
            for (const auto& s : squares) {
                int x = s[0], y = s[1], l = s[2];
                total += (double)l * l;
                minY = min(minY, (double)y);
                maxY = max(maxY, (double)(y + l));
            }
    
            double target = total / 2.0;
            double low = minY, high = maxY;
            double eps = 1e-7;
    
            for (int iter = 0; iter < 100; iter++) {
                double mid = (low + high) / 2.0;
                double belowArea = 0;
    
                for (const auto& s : squares) {
                    int x = s[0], y = s[1], l = s[2];
                    double bottom = y;
                    double top = y + l;
    
                    if (mid <= bottom) {
                        continue;
                    } else if (mid >= top) {
                        belowArea += (double)l * l;
                    } else {
                        belowArea += (mid - bottom) * l;
                    }
                }
                if (belowArea < target) {
                    low = mid;
                } else {
                    high = mid;
                }
            }
            return high;
        }
    };©leetcode