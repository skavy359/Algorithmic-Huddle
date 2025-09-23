// User function Template for C++

class Solution
{
public:
    // Complete this function
    void freqSorted(vector<int> &arr)
    {
        // Your code here
        map<int, int> mp;
        for (int i : arr)
            mp[i]++;
        for (auto i : mp)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
};