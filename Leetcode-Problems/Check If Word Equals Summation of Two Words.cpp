class Solution
{
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord)
    {
        string a = "", b = "", final = "";
        for (char c : firstWord)
            a += to_string(c - 'a');
        for (char c : secondWord)
            b += to_string(c - 'a');
        for (char c : targetWord)
            final += to_string(c - 'a');
        if (stoi(a) + stoi(b) == stoi(final))
            return true;
        return false;
    }
};