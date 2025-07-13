class Solution
{
public:
    string generateTag(string caption)
    {
        string ans = "#";
        bool capital = false;
        for (int i = 0; i < caption.length(); i++)
        {
            if (ans.length() < 100)
            {
                if (caption[i] == ' ')
                {
                    capital = true;
                }
                else if (isalpha(caption[i]))
                {
                    if (capital && ans.length() > 1)
                    {
                        ans += (toupper(caption[i]));
                    }
                    else
                    {
                        ans += tolower(caption[i]);
                    }
                    capital = false;
                }
            }
        }
        return ans;
    }
};