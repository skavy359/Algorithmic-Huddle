class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(),
             [](const vector<int> &a, const vector<int> &b)
             {
                 if (a[1] == b[1])
                 {
                     return a[0] < b[0];
                 }
                 return a[1] > b[1];
             });
        int ans = 0;
        for (int i = 0; i < boxTypes.size(); i++)
        {
            int nb = boxTypes[i][0];
            int nu = boxTypes[i][1];
            if (truckSize >= nb)
            {
                ans += (nb * nu);
                truckSize -= nb;
            }
            else
            {
                ans += (truckSize * nu);
                truckSize = 0;
            }
            if (truckSize == 0)
            {
                break;
            }
        }
        return ans;
    }
};