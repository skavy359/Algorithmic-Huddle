class Solution
{
public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int> &arr)
    {
        // Your code here
        unordered_map<int, int> mp;
        for (int i : arr)
        {
            mp[i]++;
        }
        vector<pair<int, int>> p(mp.begin(), mp.end());
        sort(p.begin(), p.end(), [](pair<int, int> &a, pair<int, int> &b)
             {
           if(a.second==b.second){
               return a.first<b.first;
           }
           return a.second>b.second; });
        int i = 0;
        for (auto x : p)
        {
            for (int j = 0; j < x.second; j++)
            {
                arr[i++] = x.first;
            }
        }
        return arr;
    }
};