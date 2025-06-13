class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> arr;
        int temp = n / 2;
        while (temp > 0)
        {
            arr.push_back(-temp);
            arr.push_back(temp);
            temp--;
        }
        if (n % 2 != 0)
        {
            arr.push_back(0);
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};