class Solution
{
public:
    string reverseWords(string s)
    {
        stringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word)
        {
            words.push_back(word);
        }
        int count = 0;
        for (char c : words[0])
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                count++;
        }
        for (int i = 1; i < words.size(); i++)
        {
            int temp = 0;
            for (char c : words[i])
            {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    temp++;
            }
            if (temp == count)
            {
                reverse(words[i].begin(), words[i].end());
            }
        }
        string khushi = "";
        for (int i = 0; i < words.size(); i++)
        {
            khushi += words[i];
            if (i != words.size() - 1)
            {
                khushi += " ";
            }
        }
        return khushi;
    }
};