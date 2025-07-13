class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, string> mp;
        vector<string> arr;
        unordered_set<string> temp;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            arr.push_back(word);
        }
        if (arr.size() != pattern.size())
            return false;
        for (int i = 0; i < pattern.size(); i++)
        {
            if (mp.count(pattern[i]))
            {
                if (mp[pattern[i]] != arr[i])
                    return false;
            }
            else
            {
                if (temp.count(arr[i]))
                {
                    return false;
                }
                mp[pattern[i]] = arr[i];
                temp.insert(arr[i]);
            }
        }
        return true;
    }
};