class Solution
{
public:
    string reorderSpaces(string text)
    {
        int spaces = 0;
        string word = "";
        vector<string> arr;
        for (char c : text)
        {
            if (c == ' ')
            {
                spaces++;
                if (!word.empty())
                    arr.push_back(word);
                word = "";
            }
            else
            {
                word += c;
            }
        }
        if (!word.empty())
            arr.push_back(word);
        if (arr.size() == 1)
        {
            return arr[0] + string(spaces, ' ');
        }
        int gap = spaces / (arr.size() - 1);
        int extra = spaces % (arr.size() - 1);
        string ans = "";
        for (int i = 0; i < arr.size(); i++)
        {
            ans += arr[i];
            if (i != arr.size() - 1)
            {
                ans += string(gap, ' ');
            }
        }
        ans += string(extra, ' ');
        return ans;
    }
};