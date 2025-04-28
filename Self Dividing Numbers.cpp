class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        for (int i = left; i <= right; i++)
        {
            int temp = i;
            bool check = true;
            while (temp > 0)
            {
                int rem = temp % 10;
                if (rem == 0 || i % rem != 0)
                {
                    check = false;
                    break;
                }
                temp /= 10;
            }
            if (check)
                ans.push_back(i);
        }

        return ans;
    }
};