class Solution
{
public:
    int countVowelStrings(int N)
    {
        return ((N + 1) * (N + 2) * (N + 3) * (N + 4)) / 24;
    }
};