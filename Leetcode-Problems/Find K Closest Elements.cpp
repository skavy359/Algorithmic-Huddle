class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i : arr)
        {
            pq.push({abs(x - i), i});
        }
        vector<int> ans;
        while (k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Another Solution
class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int left = 0, right = arr.size() - 1;
        while (right - left + 1 > k)
        {
            if (abs(arr[left] - x) > abs(arr[right] - x))
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return vector<int>(arr.begin() + left, arr.begin() + right + 1);
    }
};