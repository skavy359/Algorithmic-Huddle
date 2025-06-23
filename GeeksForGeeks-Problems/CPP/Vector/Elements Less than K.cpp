// User function Template for C++

// Back-end complete function Template for C++
class Solution
{
public:
    vector<int> list_less_than_k(vector<int> &arr, int k)
    {
        // code here
        vector<int> ans;
        for (int i : arr)
        {
            if (i < k)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
