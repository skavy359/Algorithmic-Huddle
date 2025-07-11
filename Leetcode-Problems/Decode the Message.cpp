class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        unordered_map<char, char> mp;
        char ch = 'a';
        for (char c : key)
        {
            if (c != ' ' && mp.find(c) == mp.end())
            {
                mp[c] = ch;
                ch++;
            }
        }
        for (int i = 0; i < message.length(); i++)
        {
            if (message[i] != ' ')
            {
                message[i] = mp[message[i]];
            }
        }
        return message;
    }
};