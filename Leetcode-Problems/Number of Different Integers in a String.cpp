class Solution
{
public:
    int numDifferentIntegers(string word)
    {
        set<string> st;
        string temp = "";
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] >= '0' && word[i] <= '9')
            {
                temp += word[i];
            }
            else
            {
                if (!temp.empty())
                {
                    while (temp.size() > 1 && temp[0] == '0')
                    {
                        temp.erase(0, 1);
                    }
                    st.insert(temp);
                    temp = "";
                }
                else
                {
                    temp = "";
                }
            }
        }
        if (!temp.empty())
        {
            while (temp.size() > 1 && temp[0] == '0')
                temp.erase(0, 1);
            st.insert(temp);
            temp = "";
        }
        return st.size();
    }
};