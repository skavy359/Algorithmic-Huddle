class Solution
{
public:
    vector<string> splitWordsBySeparator(vector<string> &words, char separator)
    {
        vector<string> answer;
        for (string word : words)
        {
            string temp = "";
            for (char ch : word)
            {
                if (ch == separator)
                {
                    if (!temp.empty())
                    {
                        answer.push_back(temp);
                        temp = "";
                    }
                }
                else
                {
                    temp += ch;
                }
            }
            if (!temp.empty())
            {
                answer.push_back(temp);
            }
        }
        return answer;
    }
};