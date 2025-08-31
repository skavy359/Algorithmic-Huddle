class Solution
{
public:
    vector<int> recoverOrder(vector<int> &order, vector<int> &friends)
    {
        vector<int> ans;
        for (int i : order)
        {
            auto it = find(friends.begin(), friends.end(), i);
            if (it != friends.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};