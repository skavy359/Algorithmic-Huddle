// User function Template for C++

class Solution
{
public:
    bool isPanagram(string &s)
    {
        if (s.length() < 26)
            return false;
        int arr[26] = {0};
        for (char c : s)
        {
            char temp = tolower(c);
            arr[temp - 'a']++;
        }
        for (int i : arr)
        {
            if (i == 0)
            {
                return false;
            }
        }
        return true;
    }
};