// class Solution
// {
// public:
//     string shortestCompletingWord(string licensePlate, vector<string> &words)
//     {
//         unordered_map<char, int> lp;
//         for (char c : licensePlate)
//         {
//             if (isalpha(c))
//             {
//                 c = tolower(c);
//                 lp[c]++;
//             }
//         }
//         string ans = "";
//         for (string s : words)
//         {
//             unordered_map<char, int> mp(lp.begin(), lp.end());
//             for (char c : s)
//             {
//                 c = tolower(c);
//                 if (mp.find(c) != mp.end())
//                 {
//                     mp[c]--;
//                     if (mp[c] == 0)
//                     {
//                         mp.erase(c);
//                     }
//                 }
//             }
//             if (mp.size() == 0)
//             {
//                 if (ans.empty() || s.length() < ans.length())
//                 {
//                     ans = s;
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution
{
public:
    string shortestCompletingWord(string licensePlate, vector<string> &words)
    {
        vector<int> lp(26, 0);
        for (char c : licensePlate)
        {
            if (isalpha(c))
            {
                c = tolower(c);
                lp[c - 'a']++;
            }
        }
        string ans = "";
        for (string s : words)
        {
            vector<int> mp(26, 0);
            for (char c : s)
                mp[tolower(c) - 'a']++;
            bool check = true;
            for (int i = 0; i < 26; i++)
            {
                if (lp[i] > mp[i])
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                if (ans.empty() || s.length() < ans.length())
                {
                    ans = s;
                }
            }
        }
        return ans;
    }
};