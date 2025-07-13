class Solution
{
public:
    bool isValid(string s)
    {
        int hyphen = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (isdigit(c))
                return false;
            if (!isalpha(c) && c != '!' && c != '.' && c != ',' && c != '-')
                return false;
            if (c == '-')
            {
                hyphen++;
                if (hyphen > 1 || i == 0 || i == s.length() - 1 ||
                    !isalpha(s[i - 1]) || !isalpha(s[i + 1]))
                    return false;
            }
            if (c == '!' || c == '.' || c == ',')
            {
                if (i != s.length() - 1)
                    return false;
            }
        }
        return true;
    }

    int countValidWords(string sentence)
    {
        stringstream ss(sentence);
        string word;
        vector<string> arr;
        while (ss >> word)
        {
            arr.push_back(word);
        }
        int ans = 0;
        for (string s : arr)
        {
            if (isValid(s))
                ans++;
        }
        return ans;
    }
};