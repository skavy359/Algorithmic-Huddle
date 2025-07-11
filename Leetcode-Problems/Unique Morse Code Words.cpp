class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        unordered_map<char, string> mp;
        string arr[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
                          "....", "..", ".---", "-.-", ".-..", "--", "-.",
                          "---", ".--.", "--.-", ".-.", "...", "-", "..-",
                          "...-", ".--", "-..-", "-.--", "--.."};
        for (char c = 'a'; c <= 'z'; c++)
        {
            mp[c] = arr[c - 'a'];
        }
        set<string> st;
        for (string s : words)
        {
            string temp = "";
            for (char c : s)
            {
                temp += mp[c];
            }
            st.insert(temp);
        }
        return st.size();
    }
};