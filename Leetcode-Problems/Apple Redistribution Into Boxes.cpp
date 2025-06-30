class Solution
{
public:
    int minimumBoxes(vector<int> &apple, vector<int> &capacity)
    {
        sort(capacity.rbegin(), capacity.rend());
        int sum = accumulate(apple.begin(), apple.end(), 0);
        int ans = 0;
        int temp = 0;
        for (int i : capacity)
        {
            if (temp >= sum)
            {
                break;
            }
            temp += i;
            ans++;
        }
        return ans;
    }
};