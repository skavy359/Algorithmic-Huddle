class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int ans = 0, temp = 1;
        flowerbed.push_back(0);

        for (int i : flowerbed)
        {
            if (i == 0)
                temp++;
            else
                temp = 0;

            if (temp == 3)
            {
                ans++;
                temp = 1;
            }
        }
        return ans >= n;
    }
};
