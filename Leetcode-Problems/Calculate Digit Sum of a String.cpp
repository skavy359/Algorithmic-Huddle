class Solution
{
public:
    int add(string s)
    {
        int res = 0;
        for (char c : s)
        {
            res += c - '0';
        }
        return res;
    }
    string digitSum(string s, int k)
    {
        while (s.length() > k)
        {
            string sum = "";
            for (int i = 0; i < s.length(); i += k)
            {
                string temp = s.substr(i, k);
                sum += to_string(add(temp));
            }
            s = sum;
        }
        return s;
    }
};