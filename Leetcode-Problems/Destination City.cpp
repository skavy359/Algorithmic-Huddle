class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        set<string> A, B;
        for (int i = 0; i < paths.size(); i++)
        {
            A.insert(paths[i][0]);
        }
        for (int i = 0; i < paths.size(); i++)
        {
            B.insert(paths[i][1]);
        }
        for (string s : B)
        {
            if (!A.contains(s))
            {
                return s;
            }
        }
        return "";
    }
};