class Solution
{
public:
    int getWinner(vector<int> &arr, int k)
    {
        int ans = arr[0], count = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            if (ans > arr[i])
            {
                count++;
            }
            else
            {
                ans = arr[i];
                count = 1;
            }
            if (count == k)
                break;
        }
        return ans;
    }
};