class Solution
{
public:
    double trimMean(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int remove = n * 0.05;
        double sum = 0, count = 0;
        for (int i = remove; i < n - remove; i++)
        {
            sum += arr[i];
            count++;
        }
        return sum / count;
    }
};