class Solution
{
public:
    double fractionalKnapsack(vector<int> &val, vector<int> &wt, int capacity)
    {
        // code here
        double ans = 0.0;
        vector<pair<int, int>> p;
        for (int i = 0; i < val.size(); i++)
        {
            p.push_back({val[i], wt[i]});
        }
        sort(p.begin(), p.end(), [](pair<int, int> &a, pair<int, int> &b)
             {
            double t1=(double)a.first/a.second;
            double t2=(double)b.first/b.second;
            return t1>t2; });
        for (auto i : p)
        {
            if (i.second <= capacity)
            {
                capacity -= i.second;
                ans += i.first;
            }
            else
            {
                ans += (i.first) * ((double)capacity / i.second);
                break;
            }
        }
        return ans;
    }
};
