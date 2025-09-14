class Solution
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {
        int ans = -1, dist = INT_MAX;
        bool flag = false;
        for (int i = 0; i < points.size(); i++)
        {
            int x1 = points[i][0], y1 = points[i][1];
            if (x1 == x || y1 == y)
            {
                flag = true;
                int temp = abs(x1 - x) + abs(y1 - y);
                if (temp < dist)
                {
                    dist = temp;
                    ans = i;
                }
            }
        }
        if (flag)
            return ans;
        return -1;
    }
};