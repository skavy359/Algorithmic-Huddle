class Solution
{
public:
    bool digitCount(string num)
    {
        int arr[10] = {0};
        for (int i = 0; i < num.length(); i++)
        {
            arr[num[i] - '0']++;
        }
        for (int i = 0; i < num.length(); i++)
        {
            if (num[i] - '0' != arr[i])
            {
                return false;
            }
        }
        return true;
    }
};