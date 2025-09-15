class Solution
{
public:
    int smallestAbsent(vector<int> &nums)
    {
        vector<int> flag(102, 0);
        int sum = 0;
        for (int i : nums)
        {
            sum += i;
            if (i > 0)
            {
                flag[i] = 1;
            }
        }
        for (int i = 1; i <= 101; i++)
        {
            if (!flag[i] && i * (int)nums.size() > sum)
            {
                return i;
            }
        }
        return 1;
    }
};

// Another Solution First One
class Solution
{
public:
    int smallestAbsent(vector<int> &nums)
    {
        unordered_set<int> st(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int avg = (double)sum / nums.size();
        int i = max(1, avg + 1);
        while (true)
        {
            if (!st.count(i))
                return i;
            i++;
        }
        return 1;
    }
};