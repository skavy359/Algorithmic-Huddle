class Solution
{
public:
    int findWinningPlayer(vector<int> &arr, int k)
    {
        int val = arr[0], count = 0;
        int idx = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            if (val > arr[i])
            {
                count++;
            }
            else
            {
                idx = i;
                val = arr[i];
                count = 1;
            }
            if (count == k)
                break;
        }
        return idx;
    }
};