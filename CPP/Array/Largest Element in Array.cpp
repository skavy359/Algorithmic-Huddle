class Solution
{
public:
    int largest(vector<int> &arr)
    {
        // code here
        int max = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
};
