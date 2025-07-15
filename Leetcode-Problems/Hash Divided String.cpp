class Solution
{
public:
    string stringHash(string s, int k)
    {
        string result = "";
        for (int i = 0; i < s.length(); i += k)
        {
            string temp = s.substr(i, k);
            int sum = 0;
            for (char c : temp)
            {
                sum += (c - 'a');
            }
            sum = sum % 26;
            result += (sum + 'a');
        }
        return result;
    }
};