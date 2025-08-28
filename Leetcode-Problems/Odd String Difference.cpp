class Solution
{
public:
    string oddString(vector<string> &words)
    {
        vector<vector<int>> arr;
        for (int i = 0; i < words.size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < words[i].size() - 1; j++)
            {
                int char1 = (words[i][j]) - '0';
                int char2 = (words[i][j + 1]) - '0';
                temp.push_back(char2 - char1);
            }
            arr.push_back(temp);
        }

        vector<int> curr;
        if (arr[0] == arr[1])
            curr = arr[0];
        else if (arr[0] == arr[2])
            return words[1];
        else
            return words[0];

        for (int i = 0; i < words.size(); i++)
        {
            if (arr[i] != curr)
                return words[i];
        }

        return "";
    }
};