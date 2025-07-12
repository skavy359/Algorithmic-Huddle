class Solution
{
public:
    int findMinimumOperations(string s1, string s2, string s3)
    {
        if (s1[0] != s2[0] || s1[0] != s3[0] || s2[0] != s3[0])
            return -1;
        int i = 0;
        int size = min({s1.length(), s2.length(), s3.length()});
        int size1 = s1.length();
        int size2 = s2.length();
        int size3 = s3.length();
        while (i < size)
        {
            if (s1[i] == s2[i] && s2[i] == s3[i])
            {
                i++;
            }
            else
            {
                break;
            }
        }
        return (size1 - i + size2 - i + size3 - i);
    }
};