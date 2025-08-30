class Solution
{
public:
    int findCenter(vector<vector<int>> &edges)
    {
        int a = edges[0][0];
        int b = edges[0][1];
        int x = edges[1][0];
        int y = edges[1][1];
        if (a == x || a == y)
            return a;
        return b;
    }
};