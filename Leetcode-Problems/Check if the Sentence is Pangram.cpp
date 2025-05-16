class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        set<char> pang(sentence.begin(), sentence.end());
        if (pang.size() == 26)
            return true;
        return false;
    }
};