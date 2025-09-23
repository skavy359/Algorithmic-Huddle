// Function to print the k numbers with most occurrences

class Solution
{
public:
    struct myCmp
    {
        bool operator()(pair<int, int> a, pair<int, int> b)
        {
            if (a.second == b.second)
            {
                return a.first > b.first;
            }
            return a.second < b.second;
        };
    };

    // Function to return the sum of frequencies of k numbers
    // with most occurrences in an array.
    int kMostFrequent(int arr[], int n, int k)
    {
        // Your code here
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[arr[i]]++;
        priority_queue<pair<int, int>, vector<pair<int, int>>, myCmp> pq(mp.begin(), mp.end());
        int sum = 0;
        while (k--)
        {
            sum += pq.top().second;
            pq.pop();
        }
        return sum;
    }
};