
class Solution
{
public:
    // Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string &s)
    {
        // Your code here
        string ans = "";
        for (char c : s)
        {
            while (!ans.empty() && ans.back() == c)
            {
                ans.pop_back();
            }
            ans.push_back(c);
        }
        return ans;
    }
};