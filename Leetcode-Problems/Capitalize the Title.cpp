class Solution
{
public:
    string capitalizeTitle(string title)
    {
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        string ans = "";
        stringstream ss(title);
        string word;
        while (ss >> word)
        {
            if (word.length() > 2)
                word[0] = toupper(word[0]);
            ans += word;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};