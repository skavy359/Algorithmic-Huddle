class Solution
{
public:
    string arrangeWords(string text)
    {
        text[0] = tolower(text[0]);
        stringstream ss(text);
        string word;
        vector<pair<string, int>> arr;
        int i = 0;
        while (ss >> word)
        {
            arr.push_back({word, i});
            i++;
        }
        sort(arr.begin(), arr.end(), [](auto &a, auto &b)
             {
            if (a.first.length() == b.first.length()) {
                return a.second < b.second;
            }
            return a.first.length() < b.first.length(); });
        string ans;
        for (int j = 0; j < arr.size(); j++)
        {
            if (j > 0)
                ans += " ";
            ans += arr[j].first;
        }
        ans[0] = toupper(ans[0]);
        return ans;
    }
};