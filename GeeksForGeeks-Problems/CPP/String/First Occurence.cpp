// Function to locate the occurrence of the string x in the string s.
class Solution
{
public:
    int firstOccurence(string &txt, string &pat)
    {
        // Your code here
        for (int i = 0; i <= txt.length() - pat.length(); i++)
        {
            int j;
            for (j = 0; j < pat.length(); j++)
            {
                if (txt[i + j] != pat[j])
                {
                    break;
                }
            }
            if (j == pat.length())
            {
                return i;
            }
        }
        return -1;
    }
};