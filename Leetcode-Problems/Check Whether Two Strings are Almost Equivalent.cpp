class Solution
{
public:
    bool checkAlmostEquivalent(string word1, string word2)
    {
        int arr[26] = {0};
        for (int i = 0; i < word1.length(); i++)
        {
            arr[word1[i] - 'a'] += 1;
            arr[word2[i] - 'a'] -= 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (abs(arr[i]) > 3)
                return false;
        }
        return true;
    }
};