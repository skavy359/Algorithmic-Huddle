class Solution {
public:
    string triangleType(vector<int>& num) {
        string ans = "scalene";
        if ((num[0] + num[1]) <= num[2] || (num[0] + num[2]) <= num[1] ||
            (num[1] + num[2]) <= num[0]) {
            ans = "none";
        } else if (num[0] == num[1] && num[1] == num[2]) {
            ans = "equilateral";
        } else if (num[0] == num[1] || num[0] == num[2] || num[1] == num[2]) {
            ans = "isosceles";
        }
        return ans;
    }
};
