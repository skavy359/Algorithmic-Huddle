class Solution
{
public:
    int maxAbsoluteSum(vector<int> &arr)
    {
        int maxAns = arr[0], minAns = arr[0];
        int maxEnding = arr[0], minEnding = arr[0];

        for (int i = 1; i < arr.size(); i++)
        {
            maxEnding = max(maxEnding + arr[i], arr[i]);
            maxAns = max(maxAns, maxEnding);
        }
        for (int i = 1; i < arr.size(); i++)
        {
            minEnding = min(minEnding + arr[i], arr[i]);
            minAns = min(minAns, minEnding);
        }

        return abs(maxAns) > abs(minAns) ? abs(maxAns) : abs(minAns);
    }
};