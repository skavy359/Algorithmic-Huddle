class Solution
{
public:
    int minimumSum(int num)
    {
        string temp = to_string(num);
        sort(temp.begin(), temp.end());
        string one = "", two = "";
        one += temp[0];
        one += temp[3];
        two += temp[1];
        two += temp[2];
        int ans = 0;
        ans += stoi(one) + stoi(two);
        return ans;
    }
};