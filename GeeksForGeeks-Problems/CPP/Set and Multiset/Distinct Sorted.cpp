// User function Template for C++

class Solution
{
public:
    // Complete this function
    vector<int> uniqueSorted(int arr[], int n)
    {
        // Your code here
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(arr[i]);
        }
        vector<int> ans;
        for (int i : st)
        {
            ans.push_back(i);
        }
        return ans;
    }
};