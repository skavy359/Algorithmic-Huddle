class Solution
{
public:
    int largestInteger(int num)
    {
        priority_queue<int> even, odd;
        string s = to_string(num);
        for (char c : s)
        {
            int val = c - '0';
            if (val % 2 == 0)
                even.push(val);
            else
                odd.push(val);
        }
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            ans *= 10;
            int val = s[i] - '0';
            if (val % 2 == 0)
            {
                ans += even.top();
                even.pop();
            }
            else
            {
                ans += odd.top();
                odd.pop();
            }
        }
        return ans;
    }
};