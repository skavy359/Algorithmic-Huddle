class Solution
{
public:
    int splitNum(int num)
    {
        string s = to_string(num);
        sort(s.begin(), s.end());
        string num1 = "", num2 = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
                num1 += s[i];
            else
                num2 += s[i];
        }
        int ans = stoi(num1) + stoi(num2);
        return ans;
    }
};