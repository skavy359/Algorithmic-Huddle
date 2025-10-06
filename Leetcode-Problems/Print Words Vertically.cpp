class Solution
{
public:
    vector<string> printVertically(string s)
    {
        vector<string> words;
        stringstream ss(s);
        string word;
        int maxi = -1;
        while (ss >> word)
        {
            words.push_back(word);
            int len = word.length();
            maxi = max(maxi, len);
        }
        for (string &s : words)
        {
            s.append(maxi - s.length(), ' ');
        }
        vector<string> ans;
        for (int j = 0; j < words[0].size(); j++)
        {
            string temp = "";
            for (int i = 0; i < words.size(); i++)
            {
                temp += words[i][j];
            }
            while (!temp.empty() && temp.back() == ' ')
                temp.pop_back();
            ans.push_back(temp);
        }
        return ans;
    }
};